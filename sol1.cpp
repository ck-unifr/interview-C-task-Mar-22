/*
* 图像旋转
*/
void rotate(Mat src, Mat dst, float angle) 
{
	Point2f src_center(src.cols/2.0F, src.rows/2.0F);
	Mat rot_mat = getRotationMatrix2D(src_center, angle, 1.0);
	warpAffine(src, dst, rot_mat, source.size());
}