#include <gsl/gsl_sf_gamma.h>
#include <gsl/gsl_errno.h>

/* function names generated by removing  "gsl_sf" from the beginning
   of the name.  Thus gsl_sf_gamma_e goes to gamma_e. */

void gamma_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_gamma_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void lngamma_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lngamma_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void lngamma_sgn_e(const double *x, const int *len, double *val, double *err, int *status, double *sgn)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lngamma_sgn_e(x[i], &result, sgn+i) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void gammastar_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_gammastar_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void gammainv_e(const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_gammainv_e(x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}
 
void lngamma_complex_e(const double *zr, const double *zi, const int *len, double *val_lnr, double *val_arg, double *err_lnr, double *err_arg, int *status)
{
	int i;
	gsl_sf_result lnr;
	gsl_sf_result arg;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lngamma_complex_e(zr[i], zi[i], &lnr, &arg) ;

		val_lnr[i] = lnr.val;
		val_arg[i] = arg.val;

		err_lnr[i] = lnr.err;
		err_arg[i] = arg.err;
	}
}  

void taylorcoeff_e(const int *n, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_taylorcoeff_e(n[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void fact_e(const unsigned int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_fact_e(n[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void doublefact_e(const unsigned int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_doublefact_e(n[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void lnfact_e(const unsigned int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lnfact_e(n[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void lndoublefact_e(const unsigned int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lndoublefact_e(n[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void choose_e(const unsigned int *n, unsigned int *m, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_choose_e(n[i], m[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void lnchoose_e(const unsigned int *n, unsigned int *m, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_choose_e(n[i], m[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void poch_e(const double *a, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_poch_e(a[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void lnpoch_e(const double *a, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lnpoch_e(a[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void lnpoch_sgn_e(const double *a, const double *x, const int *len, double *val, double *err, int *status, double *sgn)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lnpoch_sgn_e(a[i], x[i], &result, sgn+i) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void pochrel_e(const double *a, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_pochrel_e(a[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void gamma_inc_P_e(const double *a, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_gamma_inc_P_e(a[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void gamma_inc_Q_e(const double *a, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_gamma_inc_Q_e(a[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void gamma_inc_e(const double *a, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_gamma_inc_e(a[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void beta_e(const double *a, const double *b, int *nb, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *nb ; i++){
		status[i] = gsl_sf_beta_e(a[i], b[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void lnbeta_e(const double *a, const double *b, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_lnbeta_e(a[i], b[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}

void beta_inc_e(const double *a, const double *b, const double *x, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_beta_inc_e(a[i], b[i], x[i], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}
