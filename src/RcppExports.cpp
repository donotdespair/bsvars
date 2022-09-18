// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bsvars.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bsvar_cpp
Rcpp::List bsvar_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const arma::field<arma::mat>& VB, const Rcpp::List& prior, const Rcpp::List& starting_values, const int thin, const bool show_progress);
static SEXP _bsvars_bsvar_cpp_try(SEXP SSEXP, SEXP YSEXP, SEXP XSEXP, SEXP VBSEXP, SEXP priorSEXP, SEXP starting_valuesSEXP, SEXP thinSEXP, SEXP show_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type VB(VBSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type starting_values(starting_valuesSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const bool >::type show_progress(show_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(bsvar_cpp(S, Y, X, VB, prior, starting_values, thin, show_progress));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_bsvar_cpp(SEXP SSEXP, SEXP YSEXP, SEXP XSEXP, SEXP VBSEXP, SEXP priorSEXP, SEXP starting_valuesSEXP, SEXP thinSEXP, SEXP show_progressSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_bsvar_cpp_try(SSEXP, YSEXP, XSEXP, VBSEXP, priorSEXP, starting_valuesSEXP, thinSEXP, show_progressSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// bsvars_ir
arma::field<arma::cube> bsvars_ir(arma::cube& posterior_B, arma::cube& posterior_A, const int horizon, const int p);
static SEXP _bsvars_bsvars_ir_try(SEXP posterior_BSEXP, SEXP posterior_ASEXP, SEXP horizonSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type posterior_B(posterior_BSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type posterior_A(posterior_ASEXP);
    Rcpp::traits::input_parameter< const int >::type horizon(horizonSEXP);
    Rcpp::traits::input_parameter< const int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(bsvars_ir(posterior_B, posterior_A, horizon, p));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_bsvars_ir(SEXP posterior_BSEXP, SEXP posterior_ASEXP, SEXP horizonSEXP, SEXP pSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_bsvars_ir_try(posterior_BSEXP, posterior_ASEXP, horizonSEXP, pSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// bsvars_fevd
arma::field<arma::cube> bsvars_fevd(arma::field<arma::cube> posterior_irf);
static SEXP _bsvars_bsvars_fevd_try(SEXP posterior_irfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::field<arma::cube> >::type posterior_irf(posterior_irfSEXP);
    rcpp_result_gen = Rcpp::wrap(bsvars_fevd(posterior_irf));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_bsvars_fevd(SEXP posterior_irfSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_bsvars_fevd_try(posterior_irfSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// bsvar_msh_cpp
Rcpp::List bsvar_msh_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VB, const Rcpp::List& starting_values, const int thin, const bool finiteM, const bool MSnotMIX, const std::string name_model, const bool show_progress);
static SEXP _bsvars_bsvar_msh_cpp_try(SEXP SSEXP, SEXP YSEXP, SEXP XSEXP, SEXP priorSEXP, SEXP VBSEXP, SEXP starting_valuesSEXP, SEXP thinSEXP, SEXP finiteMSEXP, SEXP MSnotMIXSEXP, SEXP name_modelSEXP, SEXP show_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type VB(VBSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type starting_values(starting_valuesSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const bool >::type finiteM(finiteMSEXP);
    Rcpp::traits::input_parameter< const bool >::type MSnotMIX(MSnotMIXSEXP);
    Rcpp::traits::input_parameter< const std::string >::type name_model(name_modelSEXP);
    Rcpp::traits::input_parameter< const bool >::type show_progress(show_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(bsvar_msh_cpp(S, Y, X, prior, VB, starting_values, thin, finiteM, MSnotMIX, name_model, show_progress));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_bsvar_msh_cpp(SEXP SSEXP, SEXP YSEXP, SEXP XSEXP, SEXP priorSEXP, SEXP VBSEXP, SEXP starting_valuesSEXP, SEXP thinSEXP, SEXP finiteMSEXP, SEXP MSnotMIXSEXP, SEXP name_modelSEXP, SEXP show_progressSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_bsvar_msh_cpp_try(SSEXP, YSEXP, XSEXP, priorSEXP, VBSEXP, starting_valuesSEXP, thinSEXP, finiteMSEXP, MSnotMIXSEXP, name_modelSEXP, show_progressSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// bsvar_sv_cpp
Rcpp::List bsvar_sv_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VB, const Rcpp::List& starting_values, const int thin, const bool sample_s_, const bool show_progress);
static SEXP _bsvars_bsvar_sv_cpp_try(SEXP SSEXP, SEXP YSEXP, SEXP XSEXP, SEXP priorSEXP, SEXP VBSEXP, SEXP starting_valuesSEXP, SEXP thinSEXP, SEXP sample_s_SEXP, SEXP show_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::field<arma::mat>& >::type VB(VBSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type starting_values(starting_valuesSEXP);
    Rcpp::traits::input_parameter< const int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< const bool >::type sample_s_(sample_s_SEXP);
    Rcpp::traits::input_parameter< const bool >::type show_progress(show_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(bsvar_sv_cpp(S, Y, X, prior, VB, starting_values, thin, sample_s_, show_progress));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_bsvar_sv_cpp(SEXP SSEXP, SEXP YSEXP, SEXP XSEXP, SEXP priorSEXP, SEXP VBSEXP, SEXP starting_valuesSEXP, SEXP thinSEXP, SEXP sample_s_SEXP, SEXP show_progressSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_bsvar_sv_cpp_try(SSEXP, YSEXP, XSEXP, priorSEXP, VBSEXP, starting_valuesSEXP, thinSEXP, sample_s_SEXP, show_progressSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// normalisation_wz2003
void normalisation_wz2003(arma::cube& posterior_B, const arma::mat& B_hat);
static SEXP _bsvars_normalisation_wz2003_try(SEXP posterior_BSEXP, SEXP B_hatSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< arma::cube& >::type posterior_B(posterior_BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B_hat(B_hatSEXP);
    normalisation_wz2003(posterior_B, B_hat);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_normalisation_wz2003(SEXP posterior_BSEXP, SEXP B_hatSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_normalisation_wz2003_try(posterior_BSEXP, B_hatSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// logSDDR_homoskedasticity
Rcpp::List logSDDR_homoskedasticity(const Rcpp::List& posterior, const Rcpp::List& prior, const arma::mat& Y, const arma::mat& X, const bool sample_s_);
static SEXP _bsvars_logSDDR_homoskedasticity_try(SEXP posteriorSEXP, SEXP priorSEXP, SEXP YSEXP, SEXP XSEXP, SEXP sample_s_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type posterior(posteriorSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const bool >::type sample_s_(sample_s_SEXP);
    rcpp_result_gen = Rcpp::wrap(logSDDR_homoskedasticity(posterior, prior, Y, X, sample_s_));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bsvars_logSDDR_homoskedasticity(SEXP posteriorSEXP, SEXP priorSEXP, SEXP YSEXP, SEXP XSEXP, SEXP sample_s_SEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bsvars_logSDDR_homoskedasticity_try(posteriorSEXP, priorSEXP, YSEXP, XSEXP, sample_s_SEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _bsvars_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::List(*bsvar_cpp)(const int&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const Rcpp::List&,const Rcpp::List&,const int,const bool)");
        signatures.insert("arma::field<arma::cube>(*bsvars_ir)(arma::cube&,arma::cube&,const int,const int)");
        signatures.insert("arma::field<arma::cube>(*bsvars_fevd)(arma::field<arma::cube>)");
        signatures.insert("Rcpp::List(*bsvar_msh_cpp)(const int&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&,const Rcpp::List&,const int,const bool,const bool,const std::string,const bool)");
        signatures.insert("Rcpp::List(*bsvar_sv_cpp)(const int&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&,const Rcpp::List&,const int,const bool,const bool)");
        signatures.insert("void(*normalisation_wz2003)(arma::cube&,const arma::mat&)");
        signatures.insert("Rcpp::List(*logSDDR_homoskedasticity)(const Rcpp::List&,const Rcpp::List&,const arma::mat&,const arma::mat&,const bool)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _bsvars_RcppExport_registerCCallable() { 
    R_RegisterCCallable("bsvars", "_bsvars_bsvar_cpp", (DL_FUNC)_bsvars_bsvar_cpp_try);
    R_RegisterCCallable("bsvars", "_bsvars_bsvars_ir", (DL_FUNC)_bsvars_bsvars_ir_try);
    R_RegisterCCallable("bsvars", "_bsvars_bsvars_fevd", (DL_FUNC)_bsvars_bsvars_fevd_try);
    R_RegisterCCallable("bsvars", "_bsvars_bsvar_msh_cpp", (DL_FUNC)_bsvars_bsvar_msh_cpp_try);
    R_RegisterCCallable("bsvars", "_bsvars_bsvar_sv_cpp", (DL_FUNC)_bsvars_bsvar_sv_cpp_try);
    R_RegisterCCallable("bsvars", "_bsvars_normalisation_wz2003", (DL_FUNC)_bsvars_normalisation_wz2003_try);
    R_RegisterCCallable("bsvars", "_bsvars_logSDDR_homoskedasticity", (DL_FUNC)_bsvars_logSDDR_homoskedasticity_try);
    R_RegisterCCallable("bsvars", "_bsvars_RcppExport_validate", (DL_FUNC)_bsvars_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_bsvars_bsvar_cpp", (DL_FUNC) &_bsvars_bsvar_cpp, 8},
    {"_bsvars_bsvars_ir", (DL_FUNC) &_bsvars_bsvars_ir, 4},
    {"_bsvars_bsvars_fevd", (DL_FUNC) &_bsvars_bsvars_fevd, 1},
    {"_bsvars_bsvar_msh_cpp", (DL_FUNC) &_bsvars_bsvar_msh_cpp, 11},
    {"_bsvars_bsvar_sv_cpp", (DL_FUNC) &_bsvars_bsvar_sv_cpp, 9},
    {"_bsvars_normalisation_wz2003", (DL_FUNC) &_bsvars_normalisation_wz2003, 2},
    {"_bsvars_logSDDR_homoskedasticity", (DL_FUNC) &_bsvars_logSDDR_homoskedasticity, 5},
    {"_bsvars_RcppExport_registerCCallable", (DL_FUNC) &_bsvars_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_bsvars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
