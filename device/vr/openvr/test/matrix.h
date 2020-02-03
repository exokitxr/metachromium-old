#ifndef _openvr_matrix_h_
#define _openvr_matrix_h_

void setPoseMatrix(float *dstMatrixArray, const vr::HmdMatrix34_t &srcMatrix);
void getMatrixInverse(const float *inMatrix, float *outMatrix);
void multiplyMatrices(const float *aMatrix, const float *bMatrix, float *outMatrix);

#endif