// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bijectionvector
arma::vec bijectionvector(unsigned int K);
RcppExport SEXP _slcm_bijectionvector(SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(bijectionvector(K));
    return rcpp_result_gen;
END_RCPP
}
// CL_gen_invbijection_table
arma::mat CL_gen_invbijection_table(unsigned int K, unsigned int M, unsigned int nClass);
RcppExport SEXP _slcm_CL_gen_invbijection_table(SEXP KSEXP, SEXP MSEXP, SEXP nClassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    rcpp_result_gen = Rcpp::wrap(CL_gen_invbijection_table(K, M, nClass));
    return rcpp_result_gen;
END_RCPP
}
// permuteAtableIndices
arma::vec permuteAtableIndices(unsigned int nClass, unsigned int K, unsigned int M, unsigned int order, const arma::vec& vv, const arma::vec& perm);
RcppExport SEXP _slcm_permuteAtableIndices(SEXP nClassSEXP, SEXP KSEXP, SEXP MSEXP, SEXP orderSEXP, SEXP vvSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type order(orderSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vv(vvSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type perm(permSEXP);
    rcpp_result_gen = Rcpp::wrap(permuteAtableIndices(nClass, K, M, order, vv, perm));
    return rcpp_result_gen;
END_RCPP
}
// rmultinomial
double rmultinomial(const arma::vec& ps, unsigned int M);
RcppExport SEXP _slcm_rmultinomial(SEXP psSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type ps(psSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(rmultinomial(ps, M));
    return rcpp_result_gen;
END_RCPP
}
// rTruncNorm_b
double rTruncNorm_b(double mean, double sd, double w);
RcppExport SEXP _slcm_rTruncNorm_b(SEXP meanSEXP, SEXP sdSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(rTruncNorm_b(mean, sd, w));
    return rcpp_result_gen;
END_RCPP
}
// rTruncNorm_lb
double rTruncNorm_lb(double mean, double sd, double b_lb);
RcppExport SEXP _slcm_rTruncNorm_lb(SEXP meanSEXP, SEXP sdSEXP, SEXP b_lbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type b_lb(b_lbSEXP);
    rcpp_result_gen = Rcpp::wrap(rTruncNorm_lb(mean, sd, b_lb));
    return rcpp_result_gen;
END_RCPP
}
// rTruncNorm
double rTruncNorm(double mean, double sd, double w, const arma::vec& ps, unsigned int M);
RcppExport SEXP _slcm_rTruncNorm(SEXP meanSEXP, SEXP sdSEXP, SEXP wSEXP, SEXP psSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ps(psSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(rTruncNorm(mean, sd, w, ps, M));
    return rcpp_result_gen;
END_RCPP
}
// rDirichlet
arma::vec rDirichlet(const arma::vec& deltas);
RcppExport SEXP _slcm_rDirichlet(SEXP deltasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type deltas(deltasSEXP);
    rcpp_result_gen = Rcpp::wrap(rDirichlet(deltas));
    return rcpp_result_gen;
END_RCPP
}
// random_Q
arma::mat random_Q(unsigned int J, unsigned int K);
RcppExport SEXP _slcm_random_Q(SEXP JSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type J(JSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(random_Q(J, K));
    return rcpp_result_gen;
END_RCPP
}
// GenerateAtable
Rcpp::List GenerateAtable(unsigned int nClass, unsigned int K, unsigned int M, unsigned int order);
RcppExport SEXP _slcm_GenerateAtable(SEXP nClassSEXP, SEXP KSEXP, SEXP MSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(GenerateAtable(nClass, K, M, order));
    return rcpp_result_gen;
END_RCPP
}
// ETAmat
arma::mat ETAmat(unsigned int K, unsigned int J, unsigned int M, const arma::mat& Q);
RcppExport SEXP _slcm_ETAmat(SEXP KSEXP, SEXP JSEXP, SEXP MSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type J(JSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(ETAmat(K, J, M, Q));
    return rcpp_result_gen;
END_RCPP
}
// BetatoTheta
arma::mat BetatoTheta(unsigned int J, unsigned int nClass, const arma::mat& beta, const arma::mat& Atable);
RcppExport SEXP _slcm_BetatoTheta(SEXP JSEXP, SEXP nClassSEXP, SEXP betaSEXP, SEXP AtableSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type J(JSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Atable(AtableSEXP);
    rcpp_result_gen = Rcpp::wrap(BetatoTheta(J, nClass, beta, Atable));
    return rcpp_result_gen;
END_RCPP
}
// computeLB
double computeLB(unsigned int nClass, const arma::mat& LBtable, const arma::mat& Atable, unsigned int p, const arma::rowvec& betaj, double Bp, const arma::uvec& Bindices);
RcppExport SEXP _slcm_computeLB(SEXP nClassSEXP, SEXP LBtableSEXP, SEXP AtableSEXP, SEXP pSEXP, SEXP betajSEXP, SEXP BpSEXP, SEXP BindicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type LBtable(LBtableSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Atable(AtableSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type betaj(betajSEXP);
    Rcpp::traits::input_parameter< double >::type Bp(BpSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type Bindices(BindicesSEXP);
    rcpp_result_gen = Rcpp::wrap(computeLB(nClass, LBtable, Atable, p, betaj, Bp, Bindices));
    return rcpp_result_gen;
END_RCPP
}
// identify_check
double identify_check(const arma::mat Q);
RcppExport SEXP _slcm_identify_check(SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(identify_check(Q));
    return rcpp_result_gen;
END_RCPP
}
// eta_dina_matrix
arma::mat eta_dina_matrix(const arma::mat& Q);
RcppExport SEXP _slcm_eta_dina_matrix(SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(eta_dina_matrix(Q));
    return rcpp_result_gen;
END_RCPP
}
// Q_prime_matrix
arma::mat Q_prime_matrix(unsigned int K, const arma::mat& Atable, const arma::vec& vv);
RcppExport SEXP _slcm_Q_prime_matrix(SEXP KSEXP, SEXP AtableSEXP, SEXP vvSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Atable(AtableSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vv(vvSEXP);
    rcpp_result_gen = Rcpp::wrap(Q_prime_matrix(K, Atable, vv));
    return rcpp_result_gen;
END_RCPP
}
// pnorm_ln_lower_tail
double pnorm_ln_lower_tail(double B_p_lowerbound, double sigma_var_jp);
RcppExport SEXP _slcm_pnorm_ln_lower_tail(SEXP B_p_lowerboundSEXP, SEXP sigma_var_jpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type B_p_lowerbound(B_p_lowerboundSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_var_jp(sigma_var_jpSEXP);
    rcpp_result_gen = Rcpp::wrap(pnorm_ln_lower_tail(B_p_lowerbound, sigma_var_jp));
    return rcpp_result_gen;
END_RCPP
}
// pnorm_ln_upper_tail
double pnorm_ln_upper_tail(double B_p_lowerbound, double sigma_var_jp);
RcppExport SEXP _slcm_pnorm_ln_upper_tail(SEXP B_p_lowerboundSEXP, SEXP sigma_var_jpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type B_p_lowerbound(B_p_lowerboundSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_var_jp(sigma_var_jpSEXP);
    rcpp_result_gen = Rcpp::wrap(pnorm_ln_upper_tail(B_p_lowerbound, sigma_var_jp));
    return rcpp_result_gen;
END_RCPP
}
// update_slipping_guessing
void update_slipping_guessing(double& slipping, double& guessing, const arma::mat& ab_tilde);
RcppExport SEXP _slcm_update_slipping_guessing(SEXP slippingSEXP, SEXP guessingSEXP, SEXP ab_tildeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double& >::type slipping(slippingSEXP);
    Rcpp::traits::input_parameter< double& >::type guessing(guessingSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ab_tilde(ab_tildeSEXP);
    update_slipping_guessing(slipping, guessing, ab_tilde);
    return R_NilValue;
END_RCPP
}
// parm_update_nomiss
double parm_update_nomiss(unsigned int N, unsigned int J, unsigned int K, unsigned int nClass, unsigned int M, const arma::mat& Y, arma::mat& BETA, arma::mat& TAU, arma::vec& CLASS, arma::vec& pis, arma::mat& DELTA, double omega, const arma::vec& vv, const arma::uvec& main_effect_cols, const arma::mat& CLtable, const arma::mat& Atable, const arma::mat& LBtable, const arma::uvec& Bindices, const arma::mat& qtable, unsigned int P, const arma::vec& l1, double m0, arma::vec& d0, double a0, double b0);
RcppExport SEXP _slcm_parm_update_nomiss(SEXP NSEXP, SEXP JSEXP, SEXP KSEXP, SEXP nClassSEXP, SEXP MSEXP, SEXP YSEXP, SEXP BETASEXP, SEXP TAUSEXP, SEXP CLASSSEXP, SEXP pisSEXP, SEXP DELTASEXP, SEXP omegaSEXP, SEXP vvSEXP, SEXP main_effect_colsSEXP, SEXP CLtableSEXP, SEXP AtableSEXP, SEXP LBtableSEXP, SEXP BindicesSEXP, SEXP qtableSEXP, SEXP PSEXP, SEXP l1SEXP, SEXP m0SEXP, SEXP d0SEXP, SEXP a0SEXP, SEXP b0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type J(JSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type BETA(BETASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type TAU(TAUSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type CLASS(CLASSSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pis(pisSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type DELTA(DELTASEXP);
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vv(vvSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type main_effect_cols(main_effect_colsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type CLtable(CLtableSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Atable(AtableSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type LBtable(LBtableSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type Bindices(BindicesSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qtable(qtableSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type l1(l1SEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type d0(d0SEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type b0(b0SEXP);
    rcpp_result_gen = Rcpp::wrap(parm_update_nomiss(N, J, K, nClass, M, Y, BETA, TAU, CLASS, pis, DELTA, omega, vv, main_effect_cols, CLtable, Atable, LBtable, Bindices, qtable, P, l1, m0, d0, a0, b0));
    return rcpp_result_gen;
END_RCPP
}
// kappa_initialize
arma::mat kappa_initialize(unsigned int M, unsigned int J);
RcppExport SEXP _slcm_kappa_initialize(SEXP MSEXP, SEXP JSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type J(JSEXP);
    rcpp_result_gen = Rcpp::wrap(kappa_initialize(M, J));
    return rcpp_result_gen;
END_RCPP
}
// RLCMm2ll
double RLCMm2ll(unsigned int J, unsigned int N, unsigned int nClass, const arma::mat& Y, const arma::mat& theta, const arma::vec& pis);
RcppExport SEXP _slcm_RLCMm2ll(SEXP JSEXP, SEXP NSEXP, SEXP nClassSEXP, SEXP YSEXP, SEXP thetaSEXP, SEXP pisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type J(JSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nClass(nClassSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pis(pisSEXP);
    rcpp_result_gen = Rcpp::wrap(RLCMm2ll(J, N, nClass, Y, theta, pis));
    return rcpp_result_gen;
END_RCPP
}
// convert_to_q
arma::mat convert_to_q(const arma::mat& structure_matrix, const arma::mat& betas);
RcppExport SEXP _slcm_convert_to_q(SEXP structure_matrixSEXP, SEXP betasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type structure_matrix(structure_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type betas(betasSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_to_q(structure_matrix, betas));
    return rcpp_result_gen;
END_RCPP
}
// q_to_delta
arma::mat q_to_delta(const arma::mat& Q, const arma::mat& Q_prime, unsigned int M);
RcppExport SEXP _slcm_q_to_delta(SEXP QSEXP, SEXP Q_primeSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q_prime(Q_primeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(q_to_delta(Q, Q_prime, M));
    return rcpp_result_gen;
END_RCPP
}
// slcm_cpp
Rcpp::List slcm_cpp(const arma::mat& Y, unsigned int K, unsigned int M, unsigned int order, const arma::vec& psi_invj, double m0, double bq, unsigned int burnin, unsigned int chain_length);
RcppExport SEXP _slcm_slcm_cpp(SEXP YSEXP, SEXP KSEXP, SEXP MSEXP, SEXP orderSEXP, SEXP psi_invjSEXP, SEXP m0SEXP, SEXP bqSEXP, SEXP burninSEXP, SEXP chain_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type M(MSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type order(orderSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type psi_invj(psi_invjSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type bq(bqSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type chain_length(chain_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(slcm_cpp(Y, K, M, order, psi_invj, m0, bq, burnin, chain_length));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_slcm_bijectionvector", (DL_FUNC) &_slcm_bijectionvector, 1},
    {"_slcm_CL_gen_invbijection_table", (DL_FUNC) &_slcm_CL_gen_invbijection_table, 3},
    {"_slcm_permuteAtableIndices", (DL_FUNC) &_slcm_permuteAtableIndices, 6},
    {"_slcm_rmultinomial", (DL_FUNC) &_slcm_rmultinomial, 2},
    {"_slcm_rTruncNorm_b", (DL_FUNC) &_slcm_rTruncNorm_b, 3},
    {"_slcm_rTruncNorm_lb", (DL_FUNC) &_slcm_rTruncNorm_lb, 3},
    {"_slcm_rTruncNorm", (DL_FUNC) &_slcm_rTruncNorm, 5},
    {"_slcm_rDirichlet", (DL_FUNC) &_slcm_rDirichlet, 1},
    {"_slcm_random_Q", (DL_FUNC) &_slcm_random_Q, 2},
    {"_slcm_GenerateAtable", (DL_FUNC) &_slcm_GenerateAtable, 4},
    {"_slcm_ETAmat", (DL_FUNC) &_slcm_ETAmat, 4},
    {"_slcm_BetatoTheta", (DL_FUNC) &_slcm_BetatoTheta, 4},
    {"_slcm_computeLB", (DL_FUNC) &_slcm_computeLB, 7},
    {"_slcm_identify_check", (DL_FUNC) &_slcm_identify_check, 1},
    {"_slcm_eta_dina_matrix", (DL_FUNC) &_slcm_eta_dina_matrix, 1},
    {"_slcm_Q_prime_matrix", (DL_FUNC) &_slcm_Q_prime_matrix, 3},
    {"_slcm_pnorm_ln_lower_tail", (DL_FUNC) &_slcm_pnorm_ln_lower_tail, 2},
    {"_slcm_pnorm_ln_upper_tail", (DL_FUNC) &_slcm_pnorm_ln_upper_tail, 2},
    {"_slcm_update_slipping_guessing", (DL_FUNC) &_slcm_update_slipping_guessing, 3},
    {"_slcm_parm_update_nomiss", (DL_FUNC) &_slcm_parm_update_nomiss, 25},
    {"_slcm_kappa_initialize", (DL_FUNC) &_slcm_kappa_initialize, 2},
    {"_slcm_RLCMm2ll", (DL_FUNC) &_slcm_RLCMm2ll, 6},
    {"_slcm_convert_to_q", (DL_FUNC) &_slcm_convert_to_q, 2},
    {"_slcm_q_to_delta", (DL_FUNC) &_slcm_q_to_delta, 3},
    {"_slcm_slcm_cpp", (DL_FUNC) &_slcm_slcm_cpp, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_slcm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
