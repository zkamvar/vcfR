// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// extractGT2NM
NumericMatrix extractGT2NM(DataFrame x, std::string element = "DP");
RcppExport SEXP vcfR_extractGT2NM(SEXP xSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type element(elementSEXP );
        NumericMatrix __result = extractGT2NM(x, element);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// extract_GT_to_DF
DataFrame extract_GT_to_DF(DataFrame x, std::string element = "DP");
RcppExport SEXP vcfR_extract_GT_to_DF(SEXP xSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type element(elementSEXP );
        DataFrame __result = extract_GT_to_DF(x, element);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// extract_GT_to_CM
CharacterMatrix extract_GT_to_CM(DataFrame x, std::string element = "DP");
RcppExport SEXP vcfR_extract_GT_to_CM(SEXP xSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type element(elementSEXP );
        CharacterMatrix __result = extract_GT_to_CM(x, element);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CM_to_NM
NumericMatrix CM_to_NM(CharacterMatrix x);
RcppExport SEXP vcfR_CM_to_NM(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterMatrix >::type x(xSEXP );
        NumericMatrix __result = CM_to_NM(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// NM2winNM
NumericMatrix NM2winNM(NumericMatrix x, std::vector<int> pos, int maxbp, int winsize = 100);
RcppExport SEXP vcfR_NM2winNM(SEXP xSEXP, SEXP posSEXP, SEXP maxbpSEXP, SEXP winsizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::vector<int> >::type pos(posSEXP );
        Rcpp::traits::input_parameter< int >::type maxbp(maxbpSEXP );
        Rcpp::traits::input_parameter< int >::type winsize(winsizeSEXP );
        NumericMatrix __result = NM2winNM(x, pos, maxbp, winsize);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// windowize_NM
NumericMatrix windowize_NM(NumericMatrix x, NumericVector pos, NumericVector starts, NumericVector ends, String centrality = "mean");
RcppExport SEXP vcfR_windowize_NM(SEXP xSEXP, SEXP posSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP centralitySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type pos(posSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type starts(startsSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type ends(endsSEXP );
        Rcpp::traits::input_parameter< String >::type centrality(centralitySEXP );
        NumericMatrix __result = windowize_NM(x, pos, starts, ends, centrality);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// readVcfHeader
std::vector<std::string> readVcfHeader(String x);
RcppExport SEXP vcfR_readVcfHeader(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type x(xSEXP );
        std::vector<std::string> __result = readVcfHeader(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// readVcfBody
CharacterMatrix readVcfBody(String x);
RcppExport SEXP vcfR_readVcfBody(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type x(xSEXP );
        CharacterMatrix __result = readVcfBody(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// readVcfBody2
Rcpp::DataFrame readVcfBody2(std::string x);
RcppExport SEXP vcfR_readVcfBody2(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type x(xSEXP );
        Rcpp::DataFrame __result = readVcfBody2(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// window_init
Rcpp::DataFrame window_init(int window_size, int max_bp);
RcppExport SEXP vcfR_window_init(SEXP window_sizeSEXP, SEXP max_bpSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP );
        Rcpp::traits::input_parameter< int >::type max_bp(max_bpSEXP );
        Rcpp::DataFrame __result = window_init(window_size, max_bp);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// windowize_fasta
Rcpp::DataFrame windowize_fasta(Rcpp::DataFrame wins, Rcpp::CharacterVector seq);
RcppExport SEXP vcfR_windowize_fasta(SEXP winsSEXP, SEXP seqSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::DataFrame >::type wins(winsSEXP );
        Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type seq(seqSEXP );
        Rcpp::DataFrame __result = windowize_fasta(wins, seq);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// windowize_variants
Rcpp::DataFrame windowize_variants(Rcpp::DataFrame windows, Rcpp::DataFrame variants);
RcppExport SEXP vcfR_windowize_variants(SEXP windowsSEXP, SEXP variantsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::DataFrame >::type windows(windowsSEXP );
        Rcpp::traits::input_parameter< Rcpp::DataFrame >::type variants(variantsSEXP );
        Rcpp::DataFrame __result = windowize_variants(windows, variants);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// windowize_annotations
Rcpp::DataFrame windowize_annotations(Rcpp::DataFrame wins, Rcpp::NumericVector ann_starts, Rcpp::NumericVector ann_ends, int chrom_length);
RcppExport SEXP vcfR_windowize_annotations(SEXP winsSEXP, SEXP ann_startsSEXP, SEXP ann_endsSEXP, SEXP chrom_lengthSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::DataFrame >::type wins(winsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ann_starts(ann_startsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ann_ends(ann_endsSEXP );
        Rcpp::traits::input_parameter< int >::type chrom_length(chrom_lengthSEXP );
        Rcpp::DataFrame __result = windowize_annotations(wins, ann_starts, ann_ends, chrom_length);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
