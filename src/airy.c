#include <gsl/gsl_sf_airy.h>
#include <gsl/gsl_errno.h>

/* function names generated by removing  "gsl_sf" from the beginning
   of the name.  Thus gsl_sf_airy_Ai goes to airy_Ai. */

static int sf_mode[] = { GSL_PREC_DOUBLE, GSL_PREC_SINGLE, GSL_PREC_APPROX } ;

void airy_Ai_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	gsl_set_error_handler_off();
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Ai_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void airy_Bi_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Bi_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}  

void airy_Ai_scaled_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Ai_scaled_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}   

void airy_Bi_scaled_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Bi_scaled_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}   

void airy_Ai_deriv_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Ai_deriv_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}   

void airy_Bi_deriv_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Bi_deriv_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}   

void airy_Ai_deriv_scaled_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Ai_deriv_scaled_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}   

void airy_Bi_deriv_scaled_e(const double *x, const int *len, const int *mode, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
  
	for(i = 0; i< *len ; i++){
		status[i] = gsl_sf_airy_Bi_deriv_scaled_e(x[i], sf_mode[*mode], &result) ;
		val[i] = result.val;
		err[i] = result.err;
	}
}   

void airy_zero_Ai_e(const int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		if(n[i]>0){
			status[i] = gsl_sf_airy_zero_Ai_e(n[i], &result) ;
		} else {
			result.val=0.0;
			result.err=GSL_EDOM;
		}
		val[i] = result.val;
		err[i] = result.err;
	}
}

void airy_zero_Bi_e(const int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		if(n[i]>0){
			status[i] = gsl_sf_airy_zero_Bi_e(n[i], &result) ;
		} else {
			result.val=0.0;
			result.err=GSL_EDOM;
		}
		val[i] = result.val;
		err[i] = result.err;
	}
}

void airy_zero_Ai_deriv_e(const int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		if(n[i]>0){
			status[i] = gsl_sf_airy_zero_Ai_deriv_e(n[i], &result) ;
		} else {
			result.val=0.0;
			result.err=GSL_EDOM;
		}
		val[i] = result.val;
		err[i] = result.err;
	}
}

void airy_zero_Bi_deriv_e(const int *n, const int *len, double *val, double *err, int *status)
{
	int i;
	gsl_sf_result result;
	for(i = 0; i< *len ; i++){
		if(n[i]>0){
			status[i] = gsl_sf_airy_zero_Bi_deriv_e(n[i], &result) ;
		} else {
			result.val=0.0;
			result.err=GSL_EDOM;
		}
		val[i] = result.val;
		err[i] = result.err;
	}
}
