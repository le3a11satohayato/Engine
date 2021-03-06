#pragma once
#include"struct.h"
#include <DirectXMath.h>

struct Sphere
{
	//中心座標
	DirectX::XMVECTOR center = { 0.0f,0.0f ,0.0f ,1.0f };
	//半径
	float radius = 1.0f;
};

struct Plane
{
	//法線ベクトル
	DirectX::XMVECTOR normal = { 0.0f,1.0f ,0.0f ,0.0f };
	//原点(0.0f,0.0f,0.0f)からの距離
	float distance = 0.0f;
};

class Triangle
{
public:
	//頂点座標3つ
	DirectX::XMVECTOR p0;
	DirectX::XMVECTOR p1;
	DirectX::XMVECTOR p2;
	//法線ベクトル
	DirectX::XMVECTOR normal;

	/// <summary>
	/// 法線の計算
	/// </summary>
	void ComputeNormal();
};