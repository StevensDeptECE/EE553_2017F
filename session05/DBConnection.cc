class DBConnection {
	Connection* conn;
public:
	DBConnection(const string& hostname, const string& dbname, int port,
							 const string& userid, const string& password) {
		// create a database connection
	}
	~DBConnection() {
		conn->disconnect();
		delete conn;
	}
};
