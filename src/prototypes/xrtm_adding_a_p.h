/* xrtm_adding_a.c */
int forward_save_layer_add_ref_alloc(forward_save_layer_add_ref_data *d, int n);
void layer_add_ref_a(double **R12, double **T12, double *S12, double **R21, double **T21, double *S21, double **R23, double *S32, double **R13, double *S31, double **R12_a, double **T12_a, double *S12_a, double **R21_a, double **T21_a, double *S21_a, double **R23_a, double *S32_a, double **R13_a, double *S31_a, int n, double atran, double *atran_a, uchar derivs, int flag, int flag2, save_tree_data save_tree, work_data work);
int forward_save_layer_add_all_alloc(forward_save_layer_add_all_data *d, int n);
void layer_add_all_a(double **R12, double **T12, double *S12, double **R21, double **T21, double *S21, double **R23, double **T23, double *S23, double **R32, double **T32, double *S32, double **R13, double **T13, double *S13, double **R31, double **T31, double *S31, double **R12_a, double **T12_a, double *S12_a, double **R21_a, double **T21_a, double *S21_a, double **R23_a, double **T23_a, double *S23_a, double **R32_a, double **T32_a, double *S32_a, double **R13_a, double **T13_a, double *S13_a, double **R31_a, double **T31_a, double *S31_a, int n, double atran, double *atran_a, uchar derivs, save_tree_data save_tree, work_data work);
void layer_add_all_tl_with_ad(double **R12, double **T12, double *S12, double **R21, double **T21, double *S21, double **R23, double **T23, double *S23, double **R32, double **T32, double *S32, double **R13, double **T13, double *S13, double **R31, double **T31, double *S31, double ***R12_l, double ***T12_l, double **S12_l, double ***R21_l, double ***T21_l, double **S21_l, double ***R23_l, double ***T23_l, double **S23_l, double ***R32_l, double ***T32_l, double **S32_l, double ***R13_l, double ***T13_l, double **S13_l, double ***R31_l, double ***T31_l, double **S31_l, int n, int n_derivs, double atran, double *atran_l, uchar *derivs, int flag, save_tree_data save_tree, work_data work);
