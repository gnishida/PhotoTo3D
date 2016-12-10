#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include "FacadeSegmentation.h"

cv::Mat generateFacadeG(int width, int height, int thickness, std::pair<int, int> range_NF, std::pair<int, int> range_NC, int max_NF, int max_NC, const std::vector<float>& params);
void decodeParamsG(float width, float height, std::pair<int, int> range_NF, std::pair<int, int> range_NC, int max_NF, int max_NC, const std::vector<float>& params, std::vector<float>& decoded_params);
cv::Mat generateRandomFacadeG(int width, int height, int thickness, std::pair<int, int> range_NF, std::pair<int, int> range_NC, std::vector<float>& params, int window_displacement = 0, float window_prob = 1);
cv::Mat generateFacadeG(float scale, int NF, int NC, int width, int height, int thickness, float WW, float WH, float WS, float WT, float WB, float BS, float TW, float AH, float FH, float BH, float TW2, float WW2, float WH2, float WS2, float WT2, float WB2, int window_displacement = 0, float window_prob = 1);

int clusterWindowTypesG(std::vector<std::vector<fs::WindowPos>>& win_rects);
