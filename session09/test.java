/*
 */
package edu.stevens.scad;

import edu.stevens.scad.primitives.Cube;
import static java.lang.Math.*;
import java.util.*;

/**
 *
 * @author Dov Kruger
 */
public final class Vector3d {
    /**
     * x,y,z are double and visible
     */
    public double x,y,z;

    public Vector3d(double x, double y, double z) {
        this.x = x; this.y = y; this.z = z;
    }
    
    /**
     * Vector {@code (1, 0, 0)}.
     */
    public final static Vector3d UNIT_X = new Vector3d(1, 0, 0);

    /**
     * Vector {@code (0, 1, 0)}.
     */
    public final static Vector3d UNIT_Y = new Vector3d(0, 1, 0);

    /**
     * Vector {@code (0, 0, 1)}.
     */
    public final static Vector3d UNIT_Z = new Vector3d(0, 0, 1);

    /**
     * Vector {@code (0, 0, 0)}.
     */
    public final static Vector3d ZERO = new Vector3d(0, 0, 0);


    /**
     * Returns the angle between this and the specified vector.
     *
     * @param v vector
     * @return angle in radians
     */
    public double angle(Vector3d v) {
        double val = this.dot(v) / (magnitude() * v.magnitude());
        return acos(max(min(val, 1), -1)) * Geometry.RAD2DEG; // compensate rounding errors
    }

    /**
     * Returns the distance between the specified point and this point.
     *
     * @param p point
     * @return the distance between the specified point and this point
     */
    public double distance(Vector3d p) {
        return minus(p).magnitude();
    }

    /**
     * Returns a negated copy of this vector.
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return a negated copy of this vector
     */
    public Vector3d neg() {
        return new Vector3d(-x, -y, -z);
    }

    /**
     * Returns the sum of this vector and the specified vector.
     *
     * @param v the vector to add
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the sum of this vector and the specified vector
     */
    public Vector3d plus(Vector3d v) {
        return new Vector3d(x + v.x, y + v.y, z + v.z);
    }

     /**
     * Set this vector to the sum of a and b
     *
     * @param a left vector
     * @param b right vector
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the sum of this vector and the specified vector
     */
    public void plus(Vector3d a, Vector3d b) {
        x = a.x + b.x; y= a.y + b.y; z = a.z + b.z;
    }

    /**
     * Returns the difference of this vector and the specified vector.
     *
     * @param v the vector to subtract
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the difference of this vector and the specified vector
     */
    public Vector3d minus(Vector3d v) {
        return new Vector3d(x - v.x, y - v.y, z - v.z);
    }

     /**
     * Set this vector to the difference of a and b
     *
     * @param a left vector
     * @param b right vector
     *
     * <b>Note:</b> modifies this vector
     */
    public void minus(Vector3d a, Vector3d b) {
        x = a.x - b.x; y= a.y - b.y; z = a.z - b.z;
    }

    /**
     * Returns the product of this vector and the specified value.
     *
     * @param a the value
     *
     * <b>Note:</b> modifies this vector
     *
     * @return the product of this vector and the specified value
     */
    public Vector3d times(double a) {
        return new Vector3d(x * a, y * a, z * a);
    }

    /**
     * Returns the dot product of this vector and the specified vector.
     *
     * @param a the vector
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the product of this vector and the specified vector
     */
    public double dot(Vector3d a) {
        return x * a.x + y * a.y + z * a.z;
    }

    /**
     * Returns the sum of this vector and the specified vector.
     *
     * @param v the vector to add
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the sum of this vector and the specified vector
     */
    public Vector3d added(Vector3d v) {
        return new Vector3d(x + v.x, y + v.y, z + v.z);
    }

    /**
     * Returns the difference of this vector and the specified vector.
     *
     * @param v the vector to subtract
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the difference of this vector and the specified vector
     */
    public Vector3d subtracted(Vector3d v) {
        return new Vector3d(x - v.x, y - v.y, z - v.z);
    }

    /**
     * Returns the product of this vector and the specified value.
     *
     * @param a the value
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the product of this vector and the specified value
     */
    public Vector3d multiplied(double a) {
        return new Vector3d(x * a, y * a, z * a);
    }

    /**
     * Returns the product of this vector and the specified vector.
     *
     * @param a the vector
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the product of this vector and the specified vector
     */
    public Vector3d multiplied(Vector3d a) {
        return new Vector3d(x * a.x, y * a.y, z * a.z);
    }


    /**
     * Returns this vector divided by the specified value.
     *
     * @param a the value
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return this vector divided by the specified value
     */
    public Vector3d divided(double a) {
        return new Vector3d(x / a, y / a, z / a);
    }

    /**
     * Linearly interpolates between this and the specified vector.
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @param a vector
     * @param t interpolation value
     *
     * @return copy of this vector if {@code t = 0}; copy of a if {@code t = 1};
     * the point midway between this and the specified vector if {@code t = 0.5}
     */
    public Vector3d lerp(Vector3d a, double t) {
        return this.plus(a.minus(this).times(t));
    }

    /**
     * Returns the magnitude of this vector.
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the magnitude of this vector
     */
    public double magnitude() {
        return sqrt(x*x+y*y+z*z);
    }

    /**
     * Returns the squared magnitude of this vector
     * (<code>this.dot(this)</code>).
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the squared magnitude of this vector
     */
    public double magnitudeSq() {
        return x*x+y*y+z*z;
    }

    /**
     * Returns a normalized copy of this vector with length {@code 1}.
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return a normalized copy of this vector with length {@code 1}
     */
    public Vector3d normalized() {
        return this.divided(this.magnitude());
    }

    /**
     * Returns the cross product of this vector and the specified vector.
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @param a the vector
     *
     * @return the cross product of this vector and the specified vector.
     */
    public Vector3d crossed(Vector3d a) {
        return new Vector3d(
                y * a.z - z * a.y,
                z * a.x - x * a.z,
                x * a.y - y * a.x
        );
    }

    /**
     * Returns this vector in STL string format.
     *
     * @param sb string builder
     * @return the specified string builder
     */
    public StringBuilder toStlString(StringBuilder sb) {
        return sb.append(x).append(' ').append(y).append(' ').append(z);
    }

    /**
     * Returns a new vector which is orthogonal to this vector.
     * @return a new vector which is orthogonal to this vector
     */
    //TODO: implement orthogonal
/*
    public Vector3d orthogonal() {
      return  abs(z) < abs(x) ? new Vector3d(y,-x,0) : Vector3d.yz(-z,y);
    }
*/

    /**
     * Returns a transformed copy of this vector.
     *
     * @param transform the transform to apply
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return a transformed copy of this vector
     */
    public Vector3d transformed(Transform t) {
        return t.transform(this);
    }

    /**
     * Returns the sum of this vector and the specified vector.
     *
     * @param x x coordinate of the vector to add
     * @param y y coordinate of the vector to add
     * @param z z coordinate of the vector to add
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the sum of this vector and the specified vector
     */
    public Vector3d plus(double x, double y, double z) {
        return new Vector3d(x + this.x, y + this.y, z + this.z);
    }

    /**
     * Returns the difference of this vector and the specified vector.
     *
     * @param x x coordinate of the vector to subtract
     * @param y y coordinate of the vector to subtract
     * @param z z coordinate of the vector to subtract
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the difference of this vector and the specified vector
     */
    public Vector3d minus(double x, double y, double z) {
        return new Vector3d(this.x - x, this.y - y, this.z - z);
    }

    /**
     * Returns the product of this vector and the specified vector.
     *
     * @param x x coordinate of the vector to multiply
     * @param y y coordinate of the vector to multiply
     * @param z z coordinate of the vector to multiply
     *
     * <b>Note:</b> this vector is not modified.
     *
     * @return the product of this vector and the specified vector
     */
    public Vector3d times(double x, double y, double z) {
        return new Vector3d(this.x * x, this.y * y, this.z * z);
    }


    /**
     * Projects the specified vector onto this vector.
     *
     * @param v vector to project onto this vector
     * @return the projection of the specified vector onto this vector
     */
    public Vector3d project(Vector3d v) {
        final double pScale = v.dot(this) / magnitudeSq();
        return this.times(pScale);
    }

    public static Cube bounds(ArrayList<Vector3d> v) {
        Vector3d a = v.get(0), b = v.get(1);
        double minX, minY, minZ, maxX, maxY, maxZ;
        if (a.x < b.x) {
            minX = a.x;
            maxX  = b.x;
        } else {
            minX = b.x;
            maxX = a.x;
        }
        if (a.y < b.y) {
            minY = a.y;
            maxY  = b.y;
        } else {
            minY = b.y;
            maxY = a.y;
        }
        if (a.z < b.z) {
            minZ = a.z;
            maxZ  = b.z;
        } else {
            minZ = b.z;
            maxZ = a.z;
        }

        for (int i = 2; i < v.size(); i+=2) {
            a = v.get(i); b = v.get(i+1);
            if (a.x < b.x) {
                if (a.x < minX)
                    minX = a.x;
                if (b.x > maxX)
                    maxX  = b.x;
            } else {
                if (b.x < minX)
                    minX = b.x;
                if (a.x > maxX)
                   maxX = a.x;
            }
            if (a.y < b.y) {
                if (a.y < minY)
                    minY = a.y;
                if (b.y > maxY)
                    maxY  = b.y;
            } else {
                if (b.y < minY)
                    minY = b.y;
                if (a.y > maxY)
                   maxY = a.y;
            }
        } 

        return new Cube(
                new Vector3d(minX, minY, minZ),
                new Vector3d(maxX, maxY, maxZ));
    }

    public static Vector3d centroid(ArrayList<Vector3d> vertices) {
        Vector3d sum = Vector3d.ZERO;

        for (Vector3d v : vertices) {
            sum = sum.plus(v);
        }
        return sum.times(1.0 / vertices.size());
    }

}
