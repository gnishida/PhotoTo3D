#pragma once

#include <opencv2/opencv.hpp>
#include <vector>
#include "FacadeSegmentation.h"

class FacadeA {
private:
	static std::pair<int, int> range_NF;
	static std::pair<int, int> range_NC;

protected:
	FacadeA() {}

public:
	static cv::Mat generateFacade(int width, int height, int thickness, int num_floors, int num_columns, const std::vector<float>& params, std::vector<int>& selected_win_types, const cv::Scalar& bg_color, const cv::Scalar& fg_color);
	static void decodeParams(float width, float height, int num_floors, int num_columns, const std::vector<float>& params, std::vector<int>& selected_win_types, std::vector<float>& decoded_params);
	static cv::Mat generateRandomFacade(int width, int height, int thickness, std::vector<float>& params, float window_displacement = 0, float window_prob = 1);
	static cv::Mat generateFacade(float scale, int width, int height, int thickness, const cv::Scalar& bg_color, const cv::Scalar& fg_color, float GH, float FH, float AH, float SW, float TW, float WT, float WH, float WB, float WS, float WW, float window_displacement = 0, float window_prob = 1);

	static int clusterWindowTypes(std::vector<std::vector<fs::WindowPos>>& win_rects);
};