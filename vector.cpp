#include <iostream>

class vec2 {
public:
    union {
        struct { float x, y; };
        struct { float r, g; };
    };

    vec2(float x, float y)
        : x(x), y(y) {}

    ~vec2() = default;

    /* VECTOR - VECTOR OPERATIONS */

    vec2 operator+(const vec2 rhs) const { return vec2(x + rhs.x, y + rhs.y); }
    vec2 operator-(const vec2 rhs) const { return vec2(x - rhs.x, y - rhs.y); }
    vec2 operator*(const vec2 rhs) const { return vec2(x * rhs.x, y * rhs.y); }
    vec2 operator/(const vec2 rhs) const { return vec2(x / rhs.x, y / rhs.y); }

    vec2& operator+=(const vec2 rhs) { x += rhs.x; y += rhs.y; return *this; }
    vec2& operator-=(const vec2 rhs) { x -= rhs.x; y -= rhs.y; return *this; }
    vec2& operator*=(const vec2 rhs) { x *= rhs.x; y *= rhs.y; return *this; }
    vec2& operator/=(const vec2 rhs) { x /= rhs.x; y /= rhs.y; return *this; }

    /* VECTOR - SCALAR OPERATIONS */

    vec2 operator+(const float rhs) const { return vec2(x + rhs, y + rhs); }
    vec2 operator-(const float rhs) const { return vec2(x - rhs, y - rhs); }
    vec2 operator*(const float rhs) const { return vec2(x * rhs, y * rhs); }
    vec2 operator/(const float rhs) const { return vec2(x / rhs, y / rhs); }

    vec2& operator+=(const float rhs) { x += rhs; y += rhs; return *this; }
    vec2& operator-=(const float rhs) { x -= rhs; y -= rhs; return *this; }
    vec2& operator*=(const float rhs) { x *= rhs; y *= rhs; return *this; }
    vec2& operator/=(const float rhs) { x /= rhs; y /= rhs; return *this; }
};

std::ostream& operator<<(std::ostream& stream, const vec2& rhs) {
    return stream << "(" << rhs.x << ", " << rhs.y << ")";
}

class vec3 {
public:
    union {
        struct { float x, y, z; };
        struct { float r, g, b; };
    };

    vec3(float x, float y, float z)
        : x(x), y(y), z(z) {}

    ~vec3() = default;

    /* VECTOR - VECTOR OPERATIONS. */

    vec3 operator+(const vec3 rhs) const { return vec3(x + rhs.x, y + rhs.y, z + rhs.z); }
    vec3 operator-(const vec3 rhs) const { return vec3(x - rhs.x, y - rhs.y, z - rhs.z); }
    vec3 operator*(const vec3 rhs) const { return vec3(x * rhs.x, y * rhs.y, z * rhs.z); }
    vec3 operator/(const vec3 rhs) const { return vec3(x / rhs.x, y / rhs.y, z / rhs.z); }

    vec3& operator+=(const vec3 rhs) { x += rhs.x; y += rhs.y; z += rhs.z; return *this; }
    vec3& operator-=(const vec3 rhs) { x -= rhs.x; y -= rhs.y; z -= rhs.z; return *this; }
    vec3& operator*=(const vec3 rhs) { x *= rhs.x; y *= rhs.y; z *= rhs.z; return *this; }
    vec3& operator/=(const vec3 rhs) { x /= rhs.x; y /= rhs.y; z /= rhs.z; return *this; }

    /* VECTOR - SCALAR OPERATIONS */

    vec3 operator+(const float rhs) const { return vec3(x + rhs, y + rhs, z + rhs); }
    vec3 operator-(const float rhs) const { return vec3(x - rhs, y - rhs, z - rhs); }
    vec3 operator*(const float rhs) const { return vec3(x * rhs, y * rhs, z * rhs); }
    vec3 operator/(const float rhs) const { return vec3(x / rhs, y / rhs, z / rhs); }

    vec3& operator+=(const float rhs) { x += rhs; y += rhs; z += rhs; return *this; }
    vec3& operator-=(const float rhs) { x -= rhs; y -= rhs; z -= rhs; return *this; }
    vec3& operator*=(const float rhs) { x *= rhs; y *= rhs; z *= rhs; return *this; }
    vec3& operator/=(const float rhs) { x /= rhs; y /= rhs; z /= rhs; return *this; }
};

std::ostream& operator<<(std::ostream& stream, const vec3& rhs) {
    return stream << "(" << rhs.x << ", " << rhs.y << ", " << rhs.z << ")";
}

class vec4 {
public:
    union {
        struct { float x, y, z, w; };
        struct { float r, g, b, a; };
    };

    vec4(float x, float y, float z, float w)
        : x(x), y(y), z(z), w(w) {}

    ~vec4() = default;

    /* VECTOR - VECTOR OPERATIONS. */

    vec4 operator+(const vec4 rhs) const { return vec4(x + rhs.x, y + rhs.y, z + rhs.z, w + rhs.w); }
    vec4 operator-(const vec4 rhs) const { return vec4(x - rhs.x, y - rhs.y, z - rhs.z, w - rhs.w); }
    vec4 operator*(const vec4 rhs) const { return vec4(x * rhs.x, y * rhs.y, z * rhs.z, w * rhs.w); }
    vec4 operator/(const vec4 rhs) const { return vec4(x / rhs.x, y / rhs.y, z / rhs.z, w / rhs.w); }

    vec4& operator+=(const vec4 rhs) { x += rhs.x; y += rhs.y; z += rhs.z; w += rhs.w; return *this; }
    vec4& operator-=(const vec4 rhs) { x -= rhs.x; y -= rhs.y; z -= rhs.z; w -= rhs.w; return *this; }
    vec4& operator*=(const vec4 rhs) { x *= rhs.x; y *= rhs.y; z *= rhs.z; w *= rhs.w; return *this; }
    vec4& operator/=(const vec4 rhs) { x /= rhs.x; y /= rhs.y; z /= rhs.z; w /= rhs.w; return *this; }

    /* VECTOR - SCALAR OPERATIONS */

    vec4 operator+(const float rhs) const { return vec4(x + rhs, y + rhs, z + rhs, w + rhs); }
    vec4 operator-(const float rhs) const { return vec4(x - rhs, y - rhs, z - rhs, w - rhs); }
    vec4 operator*(const float rhs) const { return vec4(x * rhs, y * rhs, z * rhs, w * rhs); }
    vec4 operator/(const float rhs) const { return vec4(x / rhs, y / rhs, z / rhs, w / rhs); }

    vec4& operator+=(const float rhs) { x += rhs; y += rhs; z += rhs; w += rhs; return *this; }
    vec4& operator-=(const float rhs) { x -= rhs; y -= rhs; z -= rhs; w -= rhs; return *this; }
    vec4& operator*=(const float rhs) { x *= rhs; y *= rhs; z *= rhs; w *= rhs; return *this; }
    vec4& operator/=(const float rhs) { x /= rhs; y /= rhs; z /= rhs; w /= rhs; return *this; }
};

std::ostream& operator<<(std::ostream& stream, const vec4& rhs) {
    return stream << "(" << rhs.x << ", " << rhs.y << ", " << rhs.z << ", " << rhs.w << ")";
}

class ivec2 {
public:
    union {
        struct { int x, y; };
        struct { int r, g; };
    };

    ivec2(int x, int y)
        : x(x), y(y) {
    }

    ~ivec2() = default;

    /* VECTOR - VECTOR OPERATIONS */

    ivec2 operator+(const ivec2 rhs) const { return ivec2(x + rhs.x, y + rhs.y); }
    ivec2 operator-(const ivec2 rhs) const { return ivec2(x - rhs.x, y - rhs.y); }
    ivec2 operator*(const ivec2 rhs) const { return ivec2(x * rhs.x, y * rhs.y); }
    ivec2 operator/(const ivec2 rhs) const { return ivec2(x / rhs.x, y / rhs.y); }

    ivec2& operator+=(const ivec2 rhs) { x += rhs.x; y += rhs.y; return *this; }
    ivec2& operator-=(const ivec2 rhs) { x -= rhs.x; y -= rhs.y; return *this; }
    ivec2& operator*=(const ivec2 rhs) { x *= rhs.x; y *= rhs.y; return *this; }
    ivec2& operator/=(const ivec2 rhs) { x /= rhs.x; y /= rhs.y; return *this; }

    /* VECTOR - SCALAR OPERATIONS */

    ivec2 operator+(const int rhs) const { return ivec2(x + rhs, y + rhs); }
    ivec2 operator-(const int rhs) const { return ivec2(x - rhs, y - rhs); }
    ivec2 operator*(const int rhs) const { return ivec2(x * rhs, y * rhs); }
    ivec2 operator/(const int rhs) const { return ivec2(x / rhs, y / rhs); }

    ivec2& operator+=(const int rhs) { x += rhs; y += rhs; return *this; }
    ivec2& operator-=(const int rhs) { x -= rhs; y -= rhs; return *this; }
    ivec2& operator*=(const int rhs) { x *= rhs; y *= rhs; return *this; }
    ivec2& operator/=(const int rhs) { x /= rhs; y /= rhs; return *this; }
};

std::ostream& operator<<(std::ostream& stream, const ivec2& rhs) {
    return stream << "(" << rhs.x << ", " << rhs.y << ")";
}

class ivec3 {
public:
    union {
        struct { int x, y, z; };
        struct { int r, g, b; };
    };

    ivec3(int x, int y, int z)
        : x(x), y(y), z(z) {
    }

    ~ivec3() = default;

    /* VECTOR - VECTOR OPERATIONS. */

    ivec3 operator+(const ivec3 rhs) const { return ivec3(x + rhs.x, y + rhs.y, z + rhs.z); }
    ivec3 operator-(const ivec3 rhs) const { return ivec3(x - rhs.x, y - rhs.y, z - rhs.z); }
    ivec3 operator*(const ivec3 rhs) const { return ivec3(x * rhs.x, y * rhs.y, z * rhs.z); }
    ivec3 operator/(const ivec3 rhs) const { return ivec3(x / rhs.x, y / rhs.y, z / rhs.z); }

    ivec3& operator+=(const ivec3 rhs) { x += rhs.x; y += rhs.y; z += rhs.z; return *this; }
    ivec3& operator-=(const ivec3 rhs) { x -= rhs.x; y -= rhs.y; z -= rhs.z; return *this; }
    ivec3& operator*=(const ivec3 rhs) { x *= rhs.x; y *= rhs.y; z *= rhs.z; return *this; }
    ivec3& operator/=(const ivec3 rhs) { x /= rhs.x; y /= rhs.y; z /= rhs.z; return *this; }

    /* VECTOR - SCALAR OPERATIONS */

    ivec3 operator+(const int rhs) const { return ivec3(x + rhs, y + rhs, z + rhs); }
    ivec3 operator-(const int rhs) const { return ivec3(x - rhs, y - rhs, z - rhs); }
    ivec3 operator*(const int rhs) const { return ivec3(x * rhs, y * rhs, z * rhs); }
    ivec3 operator/(const int rhs) const { return ivec3(x / rhs, y / rhs, z / rhs); }

    ivec3& operator+=(const int rhs) { x += rhs; y += rhs; z += rhs; return *this; }
    ivec3& operator-=(const int rhs) { x -= rhs; y -= rhs; z -= rhs; return *this; }
    ivec3& operator*=(const int rhs) { x *= rhs; y *= rhs; z *= rhs; return *this; }
    ivec3& operator/=(const int rhs) { x /= rhs; y /= rhs; z /= rhs; return *this; }
};

std::ostream& operator<<(std::ostream& stream, const ivec3& rhs) {
    return stream << "(" << rhs.x << ", " << rhs.y << ", " << rhs.z << ")";
}

class ivec4 {
public:
    union {
        struct { int x, y, z, w; };
        struct { int r, g, b, a; };
    };

    ivec4(int x, int y, int z, int w)
        : x(x), y(y), z(z), w(w) {
    }

    ~ivec4() = default;

    /* VECTOR - VECTOR OPERATIONS. */

    ivec4 operator+(const ivec4 rhs) const { return ivec4(x + rhs.x, y + rhs.y, z + rhs.z, w + rhs.w); }
    ivec4 operator-(const ivec4 rhs) const { return ivec4(x - rhs.x, y - rhs.y, z - rhs.z, w - rhs.w); }
    ivec4 operator*(const ivec4 rhs) const { return ivec4(x * rhs.x, y * rhs.y, z * rhs.z, w * rhs.w); }
    ivec4 operator/(const ivec4 rhs) const { return ivec4(x / rhs.x, y / rhs.y, z / rhs.z, w / rhs.w); }

    ivec4& operator+=(const ivec4 rhs) { x += rhs.x; y += rhs.y; z += rhs.z; w += rhs.w; return *this; }
    ivec4& operator-=(const ivec4 rhs) { x -= rhs.x; y -= rhs.y; z -= rhs.z; w -= rhs.w; return *this; }
    ivec4& operator*=(const ivec4 rhs) { x *= rhs.x; y *= rhs.y; z *= rhs.z; w *= rhs.w; return *this; }
    ivec4& operator/=(const ivec4 rhs) { x /= rhs.x; y /= rhs.y; z /= rhs.z; w /= rhs.w; return *this; }

    /* VECTOR - SCALAR OPERATIONS */

    ivec4 operator+(const int rhs) const { return ivec4(x + rhs, y + rhs, z + rhs, w + rhs); }
    ivec4 operator-(const int rhs) const { return ivec4(x - rhs, y - rhs, z - rhs, w - rhs); }
    ivec4 operator*(const int rhs) const { return ivec4(x * rhs, y * rhs, z * rhs, w * rhs); }
    ivec4 operator/(const int rhs) const { return ivec4(x / rhs, y / rhs, z / rhs, w / rhs); }

    ivec4& operator+=(const int rhs) { x += rhs; y += rhs; z += rhs; w += rhs; return *this; }
    ivec4& operator-=(const int rhs) { x -= rhs; y -= rhs; z -= rhs; w -= rhs; return *this; }
    ivec4& operator*=(const int rhs) { x *= rhs; y *= rhs; z *= rhs; w *= rhs; return *this; }
    ivec4& operator/=(const int rhs) { x /= rhs; y /= rhs; z /= rhs; w /= rhs; return *this; }
};

std::ostream& operator<<(std::ostream& stream, const ivec4& rhs) {
    return stream << "(" << rhs.x << ", " << rhs.y << ", " << rhs.z << ", " << rhs.w << ")";
}

int main ()
{
    vec4 pos1 = vec4(1.0f,1.0f,2.0f,3.0f);
    std::cout << pos1;
    return 0;
}
