/* xrtm_single_a.c */
int forward_save_single_scattered_radiance_alloc(forward_save_single_scattered_radiance_data *d, int n_layers, int n_stokes);
void single_scattered_radiance_up_a(int n_stokes, int n_layers, double F_0, int n_ulevels, int *ulevels, double *utaus, double *umus, int n_umus, double *omega, double *omega_a, double *ltau, double *ltau_a, double *btran, double *btran_a, double *as_0, double *as_0_a, double *atran, double *atran_a, double **P, double **P_a, double *I_in, double *I_in_a, double **I_ss, double **I_ss_a, int utau_output, save_tree_data save_tree, work_data work);
void single_scattered_radiance_dn_a(int n_stokes, int n_layers, double F_0, int n_ulevels, int *ulevels, double *utaus, double *umus, int n_umus, double *omega, double *omega_a, double *ltau, double *ltau_a, double *btran, double *btran_a, double *as_0, double *as_0_a, double *atran, double *atran_a, double **P, double **P_a, double *I_in, double *I_in_a, double **I_ss, double **I_ss_a, int utau_output, save_tree_data save_tree, work_data work);
void n_t_tms_correction_up_a(int n_stokes, int n_layers, double F_0, int n_ulevels, int *ulevels, double *utaus, double *umus, int n_umus, double *omega, double *omega_a, double *omega2, double *omega2_a, double *ltau, double *ltau_a, double *btran, double *btran_a, double *as_0, double *as_0_a, double *atran, double *atran_a, double **P_trun, double **P_full, double **P_trun_a, double **P_full_a, double *I_in, double *I_in_a, double **I_c, double **I_c_a, int utau_output, save_tree_data save_tree, work_data work);
void n_t_tms_correction_dn_a(int n_stokes, int n_layers, double F_0, int n_ulevels, int *ulevels, double *utaus, double *umus, int n_umus, double *omega, double *omega_a, double *omega2, double *omega2_a, double *ltau, double *ltau_a, double *btran, double *btran_a, double *as_0, double *as_0_a, double *atran, double *atran_a, double **P_trun, double **P_full, double **P_trun_a, double **P_full_a, double *I_in, double *I_in_a, double **I_c, double **I_c_a, int utau_output, save_tree_data save_tree, work_data work);
void ssr_up_layer_tl_with_ad(int i_layer, int n_stokes, int n_derivs, double utau, double *umus, int n_umus, double *omega, double **omega_l, double *ltau, double **ltau_l, double *btran, double **btran_l, double *as_0, double **as_0_l, double **P, double ***P_l, double *I, double **I_l, double *I_ss, double **I_ss_l, uchar **derivs_layers, work_data work);
void single_scattered_radiance_up_tl_with_ad(int n_stokes, int n_derivs, int n_layers, double F_0, int n_ulevels, int *ulevels, double *utaus, double *umus, int n_umus, double *omega, double **omega_l, double *ltau, double **ltau_l, double *btran, double **btran_l, double *as_0, double **as_0_l, double *atran, double **atran_l, double **P, double ***P_l, double *I_in, double **I_in_l, double **I_ss, double ***I_ss_l, int utau_output, uchar **derivs_layers, uchar **derivs_beam_down, save_tree_data save_tree, work_data work);
void ssr_dn_layer_tl_with_ad(int i_layer, int n_stokes, int n_derivs, double utau, double *umus, int n_umus, double *omega, double **omega_l, double *ltau, double **ltau_l, double *btran, double **btran_l, double *as_0, double **as_0_l, double **P, double ***P_l, double *I, double **I_l, double *I_ss, double **I_ss_l, uchar **derivs_layers, work_data work);
void single_scattered_radiance_dn_tl_with_ad(int n_stokes, int n_derivs, int n_layers, double F_0, int n_ulevels, int *ulevels, double *utaus, double *umus, int n_umus, double *omega, double **omega_l, double *ltau, double **ltau_l, double *btran, double **btran_l, double *as_0, double **as_0_l, double *atran, double **atran_l, double **P, double ***P_l, double *I_in, double **I_in_l, double **I_ss, double ***I_ss_l, int utau_output, uchar **derivs_layers, uchar **derivs_beam_down, save_tree_data save_tree, work_data work);
