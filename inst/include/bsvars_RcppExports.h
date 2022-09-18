// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_bsvars_RCPPEXPORTS_H_GEN_
#define RCPP_bsvars_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace bsvars {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("bsvars", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("bsvars", "_bsvars_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in bsvars");
            }
        }
    }

    inline Rcpp::List bsvar_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const arma::field<arma::mat>& VB, const Rcpp::List& prior, const Rcpp::List& starting_values, const int thin = 100, const bool show_progress = true) {
        typedef SEXP(*Ptr_bsvar_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_cpp p_bsvar_cpp = NULL;
        if (p_bsvar_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_cpp)(const int&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const Rcpp::List&,const Rcpp::List&,const int,const bool)");
            p_bsvar_cpp = (Ptr_bsvar_cpp)R_GetCCallable("bsvars", "_bsvars_bsvar_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_cpp(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)), Shield<SEXP>(Rcpp::wrap(show_progress)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline arma::field<arma::cube> bsvars_ir(arma::cube& posterior_B, arma::cube& posterior_A, const int horizon, const int p) {
        typedef SEXP(*Ptr_bsvars_ir)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvars_ir p_bsvars_ir = NULL;
        if (p_bsvars_ir == NULL) {
            validateSignature("arma::field<arma::cube>(*bsvars_ir)(arma::cube&,arma::cube&,const int,const int)");
            p_bsvars_ir = (Ptr_bsvars_ir)R_GetCCallable("bsvars", "_bsvars_bsvars_ir");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvars_ir(Shield<SEXP>(Rcpp::wrap(posterior_B)), Shield<SEXP>(Rcpp::wrap(posterior_A)), Shield<SEXP>(Rcpp::wrap(horizon)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::field<arma::cube> >(rcpp_result_gen);
    }

    inline arma::field<arma::cube> bsvars_fevd(arma::field<arma::cube> posterior_irf) {
        typedef SEXP(*Ptr_bsvars_fevd)(SEXP);
        static Ptr_bsvars_fevd p_bsvars_fevd = NULL;
        if (p_bsvars_fevd == NULL) {
            validateSignature("arma::field<arma::cube>(*bsvars_fevd)(arma::field<arma::cube>)");
            p_bsvars_fevd = (Ptr_bsvars_fevd)R_GetCCallable("bsvars", "_bsvars_bsvars_fevd");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvars_fevd(Shield<SEXP>(Rcpp::wrap(posterior_irf)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::field<arma::cube> >(rcpp_result_gen);
    }

    inline Rcpp::List bsvar_msh_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VB, const Rcpp::List& starting_values, const int thin = 100, const bool finiteM = true, const bool MSnotMIX = true, const std::string name_model = "", const bool show_progress = true) {
        typedef SEXP(*Ptr_bsvar_msh_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_msh_cpp p_bsvar_msh_cpp = NULL;
        if (p_bsvar_msh_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_msh_cpp)(const int&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&,const Rcpp::List&,const int,const bool,const bool,const std::string,const bool)");
            p_bsvar_msh_cpp = (Ptr_bsvar_msh_cpp)R_GetCCallable("bsvars", "_bsvars_bsvar_msh_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_msh_cpp(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)), Shield<SEXP>(Rcpp::wrap(finiteM)), Shield<SEXP>(Rcpp::wrap(MSnotMIX)), Shield<SEXP>(Rcpp::wrap(name_model)), Shield<SEXP>(Rcpp::wrap(show_progress)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List bsvar_sv_cpp(const int& S, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VB, const Rcpp::List& starting_values, const int thin = 100, const bool sample_s_ = true, const bool show_progress = true) {
        typedef SEXP(*Ptr_bsvar_sv_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_sv_cpp p_bsvar_sv_cpp = NULL;
        if (p_bsvar_sv_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_sv_cpp)(const int&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&,const Rcpp::List&,const int,const bool,const bool)");
            p_bsvar_sv_cpp = (Ptr_bsvar_sv_cpp)R_GetCCallable("bsvars", "_bsvars_bsvar_sv_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_sv_cpp(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)), Shield<SEXP>(Rcpp::wrap(sample_s_)), Shield<SEXP>(Rcpp::wrap(show_progress)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline void normalisation_wz2003(arma::cube& posterior_B, const arma::mat& B_hat) {
        typedef SEXP(*Ptr_normalisation_wz2003)(SEXP,SEXP);
        static Ptr_normalisation_wz2003 p_normalisation_wz2003 = NULL;
        if (p_normalisation_wz2003 == NULL) {
            validateSignature("void(*normalisation_wz2003)(arma::cube&,const arma::mat&)");
            p_normalisation_wz2003 = (Ptr_normalisation_wz2003)R_GetCCallable("bsvars", "_bsvars_normalisation_wz2003");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_normalisation_wz2003(Shield<SEXP>(Rcpp::wrap(posterior_B)), Shield<SEXP>(Rcpp::wrap(B_hat)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline Rcpp::List logSDDR_homoskedasticity(const Rcpp::List& posterior, const Rcpp::List& prior, const arma::mat& Y, const arma::mat& X, const bool sample_s_ = true) {
        typedef SEXP(*Ptr_logSDDR_homoskedasticity)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_logSDDR_homoskedasticity p_logSDDR_homoskedasticity = NULL;
        if (p_logSDDR_homoskedasticity == NULL) {
            validateSignature("Rcpp::List(*logSDDR_homoskedasticity)(const Rcpp::List&,const Rcpp::List&,const arma::mat&,const arma::mat&,const bool)");
            p_logSDDR_homoskedasticity = (Ptr_logSDDR_homoskedasticity)R_GetCCallable("bsvars", "_bsvars_logSDDR_homoskedasticity");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_logSDDR_homoskedasticity(Shield<SEXP>(Rcpp::wrap(posterior)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(sample_s_)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

}

#endif // RCPP_bsvars_RCPPEXPORTS_H_GEN_
