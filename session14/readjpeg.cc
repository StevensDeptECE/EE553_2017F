#include <iostream>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <syslog.h>
#include <sys/stat.h>
#include "jpeglib.h"
#include <cstdio>

#include <jpeglib.h>

using namespace std;

int main (int argc, char *argv[]) {
	int rc, i, j;

	//	char *syslog_prefix = (char*) malloc(1024);
	//	sprintf(syslog_prefix, "%s", argv[0]);
	//	openlog(syslog_prefix, LOG_PERROR | LOG_PID, LOG_USER);

	if (argc != 2) {
		fprintf(stderr, "USAGE: %s filename.jpg\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	// Variables for the source jpg
	struct stat file_info;
	unsigned long jpg_size;
	unsigned char *jpg_buffer;

	// Variables for the decompressor itself
	struct jpeg_decompress_struct cinfo;
	struct jpeg_error_mgr jerr;



	// Load the jpeg data from a file into a memory buffer for 
	// the purpose of this demonstration.
	// Normally, if it's a file, you'd use jpeg_stdio_src, but just
	// imagine that this was instead being downloaded from the Internet
	// or otherwise not coming from disk
	rc = stat(argv[1], &file_info);
	if (rc) {
		//		syslog(LOG_ERR, "FAILED to stat source jpg");
		exit(EXIT_FAILURE);
	}
	jpg_size = file_info.st_size;
	jpg_buffer = (unsigned char*) malloc(jpg_size + 100); // new char[jpg_size+100];

	int fd = open(argv[1], O_RDONLY);
	i = 0;
	while (i < jpg_size) {
		rc = read(fd, jpg_buffer + i, jpg_size - i);
		cout << "read " << rc << " bytes from file " << (jpg_size-i) << '\n';
		i += rc;
	}
	close(fd);

	//	syslog(LOG_INFO, "Proc: Create Decompress struct");

	cinfo.err = jpeg_std_error(&jerr);	
	jpeg_create_decompress(&cinfo);

	//	syslog(LOG_INFO, "Proc: Set memory buffer as source");
	jpeg_mem_src(&cinfo, jpg_buffer, jpg_size);
	//	syslog(LOG_INFO, "Proc: Read the JPEG header");
	rc = jpeg_read_header(&cinfo, TRUE);

	if (rc != 1) {
		//		syslog(LOG_ERR, "File does not seem to be a normal JPEG");
		exit(EXIT_FAILURE);
	}

	//	syslog(LOG_INFO, "Proc: Initiate JPEG decompression");
	jpeg_start_decompress(&cinfo);
	
	unsigned int width = cinfo.output_width;
	unsigned int height = cinfo.output_height;
  unsigned int pixel_size = cinfo.output_components;

	//	syslog(LOG_INFO, "Proc: Image is %d by %d with %d components", 
	//			width, height, pixel_size);

	unsigned long bmp_size  = width * height * pixel_size;
	unsigned char *bmp_buffer = new unsigned char[bmp_size];

	// The row_stride is the total number of bytes it takes to store an
	// entire scanline (row). 
	int row_stride = width * pixel_size;

//	syslog(LOG_INFO, "Proc: Start reading scanlines");
	while (cinfo.output_scanline < cinfo.output_height) {
		unsigned char *buffer_array[1];
		buffer_array[0] = bmp_buffer + \
			(cinfo.output_scanline) * row_stride;

		jpeg_read_scanlines(&cinfo, buffer_array, 1);

	}
//	syslog(LOG_INFO, "Proc: Done reading scanlines");

	jpeg_finish_decompress(&cinfo);

	jpeg_destroy_decompress(&cinfo);
	free(jpg_buffer);

	fd = open("output.ppm", O_CREAT | O_WRONLY, 0666);
	char buf[1024];

	rc = sprintf(buf, "P6 %d %d 255\n", width, height);
	write(fd, buf, rc); // Write the PPM image header before data
	write(fd, bmp_buffer, bmp_size); // Write out all RGB pixel data

	close(fd);
	delete bmp_buffer;

//	syslog(LOG_INFO, "End of decompression");
	return EXIT_SUCCESS;
}
