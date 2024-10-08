#pragma once

constexpr int nr_threads = 1;
constexpr float voxel_size = 0.1f;
constexpr float approx_overlap = 0.9f;
constexpr float abort_score = 0.4f;

const float transformation_office1_office2 [4][4] = {
  { -0.6946f, -0.7194f, -0.0051f, -3.6352f },
  {  0.7194f, -0.6945f, -0.0100f, -2.3865f },
  {  0.0037f, -0.0106f,  0.9999f,  0.7778f },
  {  0.0000f,  0.0000f,  0.0000f,  1.0000f }
};
