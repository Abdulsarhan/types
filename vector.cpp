#include <iostream>

class vec2 {
public:
    float x, y;

    vec2 (float x, float y)
    : x(x), y(y) {}

    ~vec2();

    /* VECTOR - VECTOR OPERATIONS */

    vec2 operator + (const vec2 rhs) const { return vec2(x + rhs.x, y + rhs.y); }
    vec2 operator - (const vec2 rhs) const { return vec2(x - rhs.x, y - rhs.y); }
    vec2 operator * (const vec2 rhs) const { return vec2(x * rhs.x, y * rhs.y); }
    vec2 operator / (const vec2 rhs) const { return vec2(x / rhs.x, y / rhs.y); }
    vec2 operator += (const vec2 rhs) { return vec2(x += rhs.x, y += rhs.y); }
    vec2 operator -= (const vec2 rhs) { return vec2(x -= rhs.x, y -= rhs.y); }
    vec2 operator *= (const vec2 rhs) { return vec2(x *= rhs.x, y *= rhs.y); }
    vec2 operator /= (const vec2 rhs) { return vec2(x /= rhs.x, y /= rhs.y); }

    /* VECTOR - SCALAR OPERATIONS*/

    vec2 operator + (const float rhs) const { return vec2(x + rhs, y + rhs); }
    vec2 operator - (const float rhs) const { return vec2(x - rhs, y - rhs); }
    vec2 operator * (const float rhs) const { return vec2(x * rhs, y * rhs); }
    vec2 operator / (const float rhs) const { return vec2(x / rhs, y / rhs); }
    vec2 operator += (const float rhs) { return vec2(x += rhs, y += rhs); }
    vec2 operator -= (const float rhs) { return vec2(x -= rhs, y -= rhs); }
    vec2 operator *= (const float rhs) { return vec2(x *= rhs, y *= rhs); }
    vec2 operator /= (const float rhs) { return vec2(x /= rhs, y /= rhs); }
};


std::ostream& operator<< (std::ostream& stream, const vec2& rhs) {
    stream << rhs.x << ", " << rhs.y;
    return stream;
}

class vec3 {
public:
    float x, y, z;

    vec3 (float x, float y, float z)
    : x(x), y(y), z(z) {}

   ~vec3();

    /* VECTOR - VECTOR OPERATIONS. */

    vec3 operator + (const vec3 rhs) const { return vec3(x + rhs.x, y + rhs.y, z + rhs.z); }
    vec3 operator - (const vec3 rhs) const { return vec3(x - rhs.x, y - rhs.y, z - rhs.z); }
    vec3 operator * (const vec3 rhs) const { return vec3(x * rhs.x, y * rhs.y, z * rhs.z); }
    vec3 operator / (const vec3 rhs) const { return vec3(x / rhs.x, y / rhs.y, z / rhs.z); }
    vec3 operator += (const vec3 rhs) { return vec3(x += rhs.x, y += rhs.y, z += rhs.z); }
    vec3 operator -= (const vec3 rhs) { return vec3(x -= rhs.x, y -= rhs.y, z -= rhs.z); }
    vec3 operator *= (const vec3 rhs) { return vec3(x *= rhs.x, y *= rhs.y, z *= rhs.z); }
    vec3 operator /= (const vec3 rhs) { return vec3(x /= rhs.x, y /= rhs.y, z /= rhs.z); }

    /* VECTOR - SCALAR OPERATIONS */

    vec3 operator + (const float rhs) const { return vec3(x + rhs, y + rhs, z + rhs); }
    vec3 operator - (const float rhs) const { return vec3(x - rhs, y - rhs, z - rhs); }
    vec3 operator * (const float rhs) const { return vec3(x * rhs, y * rhs, z * rhs); }
    vec3 operator / (const float rhs) const { return vec3(x / rhs, y / rhs, z / rhs); }
    vec3 operator += (const float rhs) { return vec3(x += rhs, y += rhs, z += rhs); }
    vec3 operator -= (const float rhs) { return vec3(x -= rhs, y -= rhs, z -= rhs); }
    vec3 operator *= (const float rhs) { return vec3(x *= rhs, y *= rhs, z *= rhs); }
    vec3 operator /= (const float rhs) { return vec3(x /= rhs, y /= rhs, z /= rhs); }

};

std::ostream& operator<< (std::ostream& stream, const vec3& rhs) {
    stream << rhs.x << ", " << rhs.y << ", " << rhs.z;
    return stream;
}

class vec4 {
public:
    float x, y, z, w;

    vec4 (float x, float y, float z, float w)
    : x(x), y(y), z(z), w(w) {}
   ~vec4();

    /* VECTOR - VECTOR OPERATIONS. */

    vec4 operator + (const vec4 rhs) const { return vec4(x + rhs.x, y + rhs.y, z + rhs.z, w + rhs.w); }
    vec4 operator - (const vec4 rhs) const { return vec4(x - rhs.x, y - rhs.y, z - rhs.z, w - rhs.w); }
    vec4 operator * (const vec4 rhs) const { return vec4(x * rhs.x, y * rhs.y, z * rhs.z, w * rhs.w); }
    vec4 operator / (const vec4 rhs) const { return vec4(x / rhs.x, y / rhs.y, z / rhs.z, w / rhs.w); }
    vec4 operator += (const vec4 rhs) { return vec4(x += rhs.x, y += rhs.y, z += rhs.z, w += rhs.w); }
    vec4 operator -= (const vec4 rhs) { return vec4(x -= rhs.x, y -= rhs.y, z -= rhs.z, w -= rhs.w ); }
    vec4 operator *= (const vec4 rhs) { return vec4(x *= rhs.x, y *= rhs.y, z *= rhs.z, w *= rhs.w ); }
    vec4 operator /= (const vec4 rhs) { return vec4(x /= rhs.x, y /= rhs.y, z /= rhs.z, w /= rhs.w ); }

    /* VECTOR - SCALAR OPERATIONS */

    vec4 operator + (const float rhs) const { return vec4(x + rhs, y + rhs, z + rhs, w + rhs); }
    vec4 operator - (const float rhs) const { return vec4(x - rhs, y - rhs, z - rhs, w - rhs); }
    vec4 operator * (const float rhs) const { return vec4(x * rhs, y * rhs, z * rhs, w * rhs); }
    vec4 operator / (const float rhs) const { return vec4(x / rhs, y / rhs, z / rhs, w / rhs); }
    vec4 operator += (const float rhs) { return vec4(x += rhs, y += rhs, z += rhs, w += rhs); }
    vec4 operator -= (const float rhs) { return vec4(x -= rhs, y -= rhs, z -= rhs, w -= rhs); }
    vec4 operator *= (const float rhs) { return vec4(x *= rhs, y *= rhs, z *= rhs, w *= rhs); }
    vec4 operator /= (const float rhs) { return vec4(x /= rhs, y /= rhs, z /= rhs, w /= rhs); }

};

std::ostream& operator<< (std::ostream& stream, const vec4& rhs) {
    stream << rhs.x << ", " << rhs.y << ", " << rhs.z << ", " << rhs.w;
    return stream;
}

int main ()
{
    vec4 pos1 = vec4(1.0f,1.0f,2.0f,3.0f);
    std::cout << pos1;
    return 0;
}
