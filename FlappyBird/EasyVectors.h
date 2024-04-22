#pragma once

struct Vector2 {
public:
	float x;
	float y;
	Vector2(float xcord, float ycord) {
		x = xcord;
		y = ycord;
	}
	Vector2() {
		x = 0;
		y = 0;
	}
};

float Length(Vector2 vector) {
	return sqrt((vector.x * vector.x) + (vector.y * vector.y));
}

Vector2 VectorBetween(Vector2 pointA, Vector2 pointB) {
	Vector2 v;
	v.x = pointB.x - pointA.x;
	v.y = pointB.y - pointA.y;
	return v;
}

float Dot(Vector2 vectorA, Vector2 vectorB) {
	return (vectorA.x * vectorB.x) + (vectorA.y * vectorB.y);
}

Vector2 RotateVetor(Vector2 vector, float angle) {
	Vector2 r;
	r.x = cos(angle) * vector.x - sin(angle) * vector.y;
	r.y = sin(angle) * vector.x + cos(angle) * vector.y;
	return r;
}

Vector2 NormalizeVector(Vector2 vector) {
	float l = Length(vector);
	return Vector2(vector.x / l, vector.y / l);
}
