/* xrtm_pade_rts.c */
void pade_get_s_and_r(double **r_, double **t_, int n_quad, double ltau, int n_umus, double *umus, int *s, int *r, int derivs);
matd1d2 get_work_d2_d(work_data *work, size_t m, size_t n, size_t d);
matd1d2 *get_work_d2_d2(work_data *work, size_t v, size_t m, size_t n, size_t d);
void pade_calc_R_and_T_2(matd1d2 N11, matd1d2 N12, matd1d2 N21, matd1d2 N22, matd1d2 D11, matd1d2 D12, matd1d2 D21, matd1d2 D22, matd1d2 R_p, matd1d2 T_p, matd1d2 R_m, matd1d2 T_m, matd1d2 *O11, matd1d2 *O12, matd1d2 *O21, matd1d2 *O22, matd1d2 *E11, matd1d2 *E12, matd1d2 *E21, matd1d2 *E22, matd1d2 *R_p_l, matd1d2 *T_p_l, matd1d2 *R_m_l, matd1d2 *T_m_l, int n_quad, int n_stokes, int n_derivs, int check_condition, int reduced, int symmetric, int vector, double *condition, uchar *derivs, work_data work, int n_umus);
void rtm_pade_rts2(int n_quad, int n_stokes, int n_derivs, double F_0, double *qxv, double *qwv, double *umus, int n_umus, double planck0, double planck1, double *planck0_l, double *planck1_l, double omega, double *omega_l, double ltau, double *ltau_l, double as_0, double *as_0_l, double atran, double *atran_l, double *P_x0_p, double *P_x0_m, double **r_p, double **t_p, double **r_m, double **t_m, double **R_p, double **T_p, double **R_m, double **T_m, double *S_p, double *S_m, double *Sl_p, double *Sl_m, double **P_x0_p_l, double **P_x0_m_l, double ***r_p_l, double ***t_p_l, double ***r_m_l, double ***t_m_l, double ***R_p_l, double ***T_p_l, double ***R_m_l, double ***T_m_l, double **S_p_l, double **S_m_l, double **Sl_p_l, double **Sl_m_l, int pade_s, int pade_r, int check_condition, int symmetric, int solar, int thermal, int vector, int gamma_init, double *condition, uchar *derivs_layers, uchar *derivs_beam, uchar *derivs_thermal, uchar *derivs_sources, save_tree_data save_tree, work_data work);
void pade_calc_R_and_T_1(double **N11, double **N12, double **N21, double **N22, double **D11, double **D12, double **D21, double **D22, double **R_p, double **T_p, double **R_m, double **T_m, double ***O11, double ***O12, double ***O21, double ***O22, double ***E11, double ***E12, double ***E21, double ***E22, double ***R_p_l, double ***T_p_l, double ***R_m_l, double ***T_m_l, int n_quad, int n_stokes, int n_derivs, int symmetric, int reduced, int vector, int check_condition, double *condition, uchar *derivs, work_data work);
void rtm_pade_rts(int n_quad, int n_stokes, int n_derivs, double F_0, double *qx_v, double *qwv, double *umus, int n_umus, double planck0, double planck1, double *planck0_l, double *planck1_l, double omega, double *omega_l, double ltau, double *ltau_l, double btran, double *btran_l, double as_0, double *as_0_l, double atran, double *atran_l, double *P_0p, double *P_0m, double **r_p, double **t_p, double **r_m, double **t_m, double **R_p, double **T_p, double **R_m, double **T_m, double *S_p, double *S_m, double **P_0p_l, double **P_0m_l, double ***r_p_l, double ***t_p_l, double ***r_m_l, double ***t_m_l, double ***R_p_l, double ***T_p_l, double ***R_m_l, double ***T_m_l, double **S_p_l, double **S_m_l, int pade_s, int pade_r, int symmetric, int vector, int thermal, int check_condition, double *condition, uchar *derivs_layers, uchar *derivs_beam_down, save_tree_data save_tree, work_data work);
