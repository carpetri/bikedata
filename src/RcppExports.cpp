// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// importDataToSqlite3
int importDataToSqlite3(Rcpp::CharacterVector datafiles, const char* spdb, std::string city, bool quiet);
RcppExport SEXP bikedata_importDataToSqlite3(SEXP datafilesSEXP, SEXP spdbSEXP, SEXP citySEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type datafiles(datafilesSEXP);
    Rcpp::traits::input_parameter< const char* >::type spdb(spdbSEXP);
    Rcpp::traits::input_parameter< std::string >::type city(citySEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(importDataToSqlite3(datafiles, spdb, city, quiet));
    return rcpp_result_gen;
END_RCPP
}
// create_sqlite3_db
int create_sqlite3_db(const char * spdb);
RcppExport SEXP bikedata_create_sqlite3_db(SEXP spdbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type spdb(spdbSEXP);
    rcpp_result_gen = Rcpp::wrap(create_sqlite3_db(spdb));
    return rcpp_result_gen;
END_RCPP
}
// create_db_indexes
int create_db_indexes(const char* spdb, Rcpp::CharacterVector tables, Rcpp::CharacterVector cols, bool reindex);
RcppExport SEXP bikedata_create_db_indexes(SEXP spdbSEXP, SEXP tablesSEXP, SEXP colsSEXP, SEXP reindexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type spdb(spdbSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type tables(tablesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< bool >::type reindex(reindexSEXP);
    rcpp_result_gen = Rcpp::wrap(create_db_indexes(spdb, tables, cols, reindex));
    return rcpp_result_gen;
END_RCPP
}
// create_city_index
int create_city_index(const char* spdb, bool reindex);
RcppExport SEXP bikedata_create_city_index(SEXP spdbSEXP, SEXP reindexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type spdb(spdbSEXP);
    Rcpp::traits::input_parameter< bool >::type reindex(reindexSEXP);
    rcpp_result_gen = Rcpp::wrap(create_city_index(spdb, reindex));
    return rcpp_result_gen;
END_RCPP
}
