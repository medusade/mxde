/**
 **********************************************************************
 * Copyright (c) 1988-2005 $organization$.
 *
 * This software is provided by the author and contributors ``as is'' and
 * any express or implied warranties, including, but not limited to, the
 * implied warranties of merchantability and fitness for a particular purpose
 * are disclaimed.  In no event shall the author or contributors be liable
 * for any direct, indirect, incidental, special, exemplary, or consequential
 * damages (including, but not limited to, procurement of substitute goods
 * or services; loss of use, data, or profits; or business interruption)
 * however caused and on any theory of liability, whether in contract, strict
 * liability, or tort (including negligence or otherwise) arising in any way
 * out of the use of this software, even if advised of the possibility of
 * such damage.
 *
 *   File: casn1objectidentifiertable.hxx
 *
 * Author: $author$
 *   Date: 1/29/2005
 *
 *    $Id$
 **********************************************************************
 */
#ifndef _CASN1OBJECTIDENTIFIERTABLE_HXX
#define _CASN1OBJECTIDENTIFIERTABLE_HXX

/**
 **********************************************************************
 * Enum: 
 *
 * Author: $author$
 *   Date: 1/29/2005
 **********************************************************************
 */
enum
{
    e_NONE  = -1,
    e_FIRST = 0,

    e_undefined                          = 0,
    e_domainComponent                    = 1,
    e_Domain                             = 2,
    e_iso                                = 3,
    e_rle_compression                    = 4,
    e_zlib_compression                   = 5,
    e_member_body                        = 6,
    e_ISO_US                             = 7,
    e_X9_57                              = 8,
    e_X9cm                               = 9,
    e_dsa                                = 10,
    e_dsaWithSHA1                        = 11,
    e_cast5_cbc                          = 12,
    e_pbeWithMD5AndCast5_CBC             = 13,
    e_rsadsi                             = 14,
    e_pkcs                               = 15,
    e_pkcs1                              = 16,
    e_rsaEncryption                      = 17,
    e_md2WithRSAEncryption               = 18,
    e_md5WithRSAEncryption               = 19,
    e_sha1WithRSAEncryption              = 20,
    e_pkcs3                              = 21,
    e_dhKeyAgreement                     = 22,
    e_pkcs5                              = 23,
    e_pbeWithMD2AndDESCBC                = 24,
    e_pbeWithMD5AndDESCBC                = 25,
    e_pbeWithMD2AndRC2_CBC               = 26,
    e_pbeWithMD5AndRC2_CBC               = 27,
    e_pbeWithSHA1AndDES_CBC              = 28,
    e_pbeWithSHA1AndRC2CBC               = 29,
    e_pbeWithSHA1AndRC4                  = 30,
    e_pbes2                              = 31,
    e_pbmac1                             = 32,
    e_pkcs7                              = 33,
    e_pkcs7Data                          = 34,
    e_pkcs7SignedData                    = 35,
    e_pkcs7EnvelopedData                 = 36,
    e_pkcs7SignedAndEnvelopedData        = 37,
    e_pkcs7DigestData                    = 38,
    e_pkcs7EncryptedData                 = 39,
    e_pkcs9                              = 40,
    e_emailAddress                       = 41,
    e_unstructuredName                   = 42,
    e_contentType                        = 43,
    e_messageDigest                      = 44,
    e_signingTime                        = 45,
    e_countersignature                   = 46,
    e_challengePassword                  = 47,
    e_unstructuredAddress                = 48,
    e_extendedCertificateAttributes      = 49,
    e_ext_req                            = 50,
    e_SMIMECapabilities                  = 51,
    e_SMIME                              = 52,
    e_id_smime_mod                       = 53,
    e_id_smime_mod_cms                   = 54,
    e_id_smime_mod_ess                   = 55,
    e_id_smime_mod_oid                   = 56,
    e_id_smime_mod_msg_v3                = 57,
    e_id_smime_mod_ets_eSignature_88     = 58,
    e_id_smime_mod_ets_eSignature_97     = 59,
    e_id_smime_mod_ets_eSigPolicy_88     = 60,
    e_id_smime_mod_ets_eSigPolicy_97     = 61,
    e_id_smime_ct                        = 62,
    e_id_smime_ct_receipt                = 63,
    e_id_smime_ct_authData               = 64,
    e_id_smime_ct_publishCert            = 65,
    e_id_smime_ct_TSTInfo                = 66,
    e_id_smime_ct_TDTInfo                = 67,
    e_id_smime_ct_contentInfo            = 68,
    e_id_smime_ct_DVCSRequestData        = 69,
    e_id_smime_ct_DVCSResponseData       = 70,
    e_id_smime_aa                        = 71,
    e_id_smime_aa_receiptRequest         = 72,
    e_id_smime_aa_securityLabel          = 73,
    e_id_smime_aa_mlExpandHistory        = 74,
    e_id_smime_aa_contentHint            = 75,
    e_id_smime_aa_msgSigDigest           = 76,
    e_id_smime_aa_encapContentType       = 77,
    e_id_smime_aa_contentIdentifier      = 78,
    e_id_smime_aa_macValue               = 79,
    e_id_smime_aa_equivalentLabels       = 80,
    e_id_smime_aa_contentReference       = 81,
    e_id_smime_aa_encrypKeyPref          = 82,
    e_id_smime_aa_signingCertificate     = 83,
    e_id_smime_aa_smimeEncryptCerts      = 84,
    e_id_smime_aa_timeStampToken         = 85,
    e_id_smime_aa_ets_sigPolicyId        = 86,
    e_id_smime_aa_ets_commitmentType     = 87,
    e_id_smime_aa_ets_signerLocation     = 88,
    e_id_smime_aa_ets_signerAttr         = 89,
    e_id_smime_aa_ets_otherSigCert       = 90,
    e_id_smime_aa_ets_contentTimestamp   = 91,
    e_id_smime_aa_ets_CertificateRefs    = 92,
    e_id_smime_aa_ets_RevocationRefs     = 93,
    e_id_smime_aa_ets_certValues         = 94,
    e_id_smime_aa_ets_revocationValues   = 95,
    e_id_smime_aa_ets_escTimeStamp       = 96,
    e_id_smime_aa_ets_certCRLTimestamp   = 97,
    e_id_smime_aa_ets_archiveTimeStamp   = 98,
    e_id_smime_aa_signatureType          = 99,
    e_id_smime_aa_dvcs_dvc               = 100,
    e_id_smime_alg                       = 101,
    e_id_smime_alg_ESDHwith3DES          = 102,
    e_id_smime_alg_ESDHwithRC2           = 103,
    e_id_smime_alg_3DESwrap              = 104,
    e_id_smime_alg_RC2wrap               = 105,
    e_id_smime_alg_ESDH                  = 106,
    e_id_smime_alg_CMS3DESwrap           = 107,
    e_id_smime_alg_CMSRC2wrap            = 108,
    e_id_smime_cd                        = 109,
    e_id_smime_cd_ldap                   = 110,
    e_id_smime_spq                       = 111,
    e_id_smime_spq_ets_sqt_uri           = 112,
    e_id_smime_spq_ets_sqt_unotice       = 113,
    e_id_smime_cti                       = 114,
    e_id_smime_cti_ets_proofOfOrigin     = 115,
    e_id_smime_cti_ets_proofOfReceipt    = 116,
    e_id_smime_cti_ets_proofOfDelivery   = 117,
    e_id_smime_cti_ets_proofOfSender     = 118,
    e_id_smime_cti_ets_proofOfApproval   = 119,
    e_id_smime_cti_ets_proofOfCreation   = 120,
    e_friendlyName                       = 121,
    e_localKeyID                         = 122,
    e_certTypes                          = 123,
    e_x509Certificate                    = 124,
    e_sdsiCertificate                    = 125,
    e_crlTypes                           = 126,
    e_x509Crl                            = 127,
    e_pkcs12                             = 128,
    e_pkcs12_pbeids                      = 129,
    e_pbe_WithSHA1And128BitRC4           = 130,
    e_pbe_WithSHA1And40BitRC4            = 131,
    e_pbe_WithSHA1And3_Key_TripleDES_CBC = 132,
    e_pbe_WithSHA1And2_Key_TripleDES_CBC = 133,
    e_pbe_WithSHA1And128BitRC2_CBC       = 134,
    e_pbe_WithSHA1And40BitRC2_CBC        = 135,
    e_pkcs12_Version1                    = 136,
    e_pkcs12_BagIds                      = 137,
    e_keyBag                             = 138,
    e_pkcs8ShroudedKeyBag                = 139,
    e_certBag                            = 140,
    e_crlBag                             = 141,
    e_secretBag                          = 142,
    e_safeContentsBag                    = 143,
    e_md2                                = 144,
    e_md4                                = 145,
    e_md5                                = 146,
    e_hmacWithSHA1                       = 147,
    e_rc2cbc                             = 148,
    e_rc4                                = 149,
    e_desede3cbc                         = 150,
    e_rc5_cbc                            = 151,
    e_org                                = 152,
    e_dod                                = 153,
    e_internet                           = 154,
    e_iana                               = 155,
    e_Directory                          = 156,
    e_Management                         = 157,
    e_Experimental                       = 158,
    e_Private                            = 159,
    e_Enterprises                        = 160,
    e_ms_ext_req                         = 161,
    e_ms_code_ind                        = 162,
    e_ms_code_com                        = 163,
    e_ms_ctl_sign                        = 164,
    e_ms_sgc                             = 165,
    e_ms_efs                             = 166,
    e_dcObject                           = 167,
    e_idea_cbc                           = 168,
    e_bf_cbc                             = 169,
    e_Security                           = 170,
    e_id_pkix                            = 171,
    e_id_pkix_mod                        = 172,
    e_id_pkix1_explicit_88               = 173,
    e_id_pkix1_implicit_88               = 174,
    e_id_pkix1_explicit_93               = 175,
    e_id_pkix1_implicit_93               = 176,
    e_id_mod_crmf                        = 177,
    e_id_mod_cmc                         = 178,
    e_id_mod_kea_profile_88              = 179,
    e_id_mod_kea_profile_93              = 180,
    e_id_mod_cmp                         = 181,
    e_id_mod_qualified_cert_88           = 182,
    e_id_mod_qualified_cert_93           = 183,
    e_id_mod_attribute_cert              = 184,
    e_id_mod_timestamp_protocol          = 185,
    e_id_mod_ocsp                        = 186,
    e_id_mod_dvcs                        = 187,
    e_id_mod_cmp2000                     = 188,
    e_id_pe                              = 189,
    e_info_access                        = 190,
    e_biometricInfo                      = 191,
    e_qcStatements                       = 192,
    e_ac_auditEntity                     = 193,
    e_ac_targeting                       = 194,
    e_aaControls                         = 195,
    e_sbqp_ipAddrBlock                   = 196,
    e_sbqp_autonomousSysNum              = 197,
    e_sbqp_routerIdentifier              = 198,
    e_id_qt                              = 199,
    e_id_qt_cps                          = 200,
    e_id_qt_unotice                      = 201,
    e_textNotice                         = 202,
    e_id_kp                              = 203,
    e_server_auth                        = 204,
    e_client_auth                        = 205,
    e_code_sign                          = 206,
    e_email_protect                      = 207,
    e_ipsecEndSystem                     = 208,
    e_ipsecTunnel                        = 209,
    e_ipsecUser                          = 210,
    e_time_stamp                         = 211,
    e_OCSP_sign                          = 212,
    e_dvcs                               = 213,
    e_id_it                              = 214,
    e_id_it_caProtEncCert                = 215,
    e_id_it_signKeyPairTypes             = 216,
    e_id_it_encKeyPairTypes              = 217,
    e_id_it_preferredSymmAlg             = 218,
    e_id_it_caKeyUpdateInfo              = 219,
    e_id_it_currentCRL                   = 220,
    e_id_it_unsupportedOIDs              = 221,
    e_id_it_subscriptionRequest          = 222,
    e_id_it_subscriptionResponse         = 223,
    e_id_it_keyPairParamReq              = 224,
    e_id_it_keyPairParamRep              = 225,
    e_id_it_revPassphrase                = 226,
    e_id_it_implicitConfirm              = 227,
    e_id_it_confirmWaitTime              = 228,
    e_id_it_origPKIMessage               = 229,
    e_id_pkip                            = 230,
    e_id_regCtrl                         = 231,
    e_id_regCtrl_regToken                = 232,
    e_id_regCtrl_authenticator           = 233,
    e_id_regCtrl_pkiPublicationInfo      = 234,
    e_id_regCtrl_pkiArchiveOptions       = 235,
    e_id_regCtrl_oldCertID               = 236,
    e_id_regCtrl_protocolEncrKey         = 237,
    e_id_regInfo                         = 238,
    e_id_regInfo_utf8Pairs               = 239,
    e_id_regInfo_certReq                 = 240,
    e_id_alg                             = 241,
    e_id_alg_des40                       = 242,
    e_id_alg_noSignature                 = 243,
    e_id_alg_dh_sig_hmac_sha1            = 244,
    e_id_alg_dh_pop                      = 245,
    e_id_cmc                             = 246,
    e_id_cmc_statusInfo                  = 247,
    e_id_cmc_identification              = 248,
    e_id_cmc_identityProof               = 249,
    e_id_cmc_dataReturn                  = 250,
    e_id_cmc_transactionId               = 251,
    e_id_cmc_senderNonce                 = 252,
    e_id_cmc_recipientNonce              = 253,
    e_id_cmc_addExtensions               = 254,
    e_id_cmc_encryptedPOP                = 255,
    e_id_cmc_decryptedPOP                = 256,
    e_id_cmc_lraPOPWitness               = 257,
    e_id_cmc_getCert                     = 258,
    e_id_cmc_getCRL                      = 259,
    e_id_cmc_revokeRequest               = 260,
    e_id_cmc_regInfo                     = 261,
    e_id_cmc_responseInfo                = 262,
    e_id_cmc_queryPending                = 263,
    e_id_cmc_popLinkRandom               = 264,
    e_id_cmc_popLinkWitness              = 265,
    e_id_cmc_confirmCertAcceptance       = 266,
    e_id_on                              = 267,
    e_id_on_personalData                 = 268,
    e_id_pda                             = 269,
    e_id_pda_dateOfBirth                 = 270,
    e_id_pda_placeOfBirth                = 271,
    e_id_pda_pseudonym                   = 272,
    e_id_pda_gender                      = 273,
    e_id_pda_countryOfCitizenship        = 274,
    e_id_pda_countryOfResidence          = 275,
    e_id_aca                             = 276,
    e_id_aca_authenticationInfo          = 277,
    e_id_aca_accessIdentity              = 278,
    e_id_aca_chargingIdentity            = 279,
    e_id_aca_group                       = 280,
    e_id_aca_role                        = 281,
    e_id_qcs                             = 282,
    e_id_qcs_pkixQCSyntax_v1             = 283,
    e_id_cct                             = 284,
    e_id_cct_crs                         = 285,
    e_id_cct_PKIData                     = 286,
    e_id_cct_PKIResponse                 = 287,
    e_id_ad                              = 288,
    e_ad_OCSP                            = 289,
    e_id_pkix_OCSP                       = 290,
    e_id_pkix_OCSP_basic                 = 291,
    e_id_pkix_OCSP_Nonce                 = 292,
    e_id_pkix_OCSP_CrlID                 = 293,
    e_id_pkix_OCSP_acceptableResponses   = 294,
    e_id_pkix_OCSP_noCheck               = 295,
    e_id_pkix_OCSP_archiveCutoff         = 296,
    e_id_pkix_OCSP_serviceLocator        = 297,
    e_id_pkix_OCSP_extendedStatus        = 298,
    e_id_pkix_OCSP_valid                 = 299,
    e_id_pkix_OCSP_path                  = 300,
    e_id_pkix_OCSP_trustRoot             = 301,
    e_ad_ca_issuers                      = 302,
    e_ad_timeStamping                    = 303,
    e_ad_dvcs                            = 304,
    e_SNMPv2                             = 305,
    e_Mail                               = 306,
    e_algorithm                          = 307,
    e_md5WithRSA                         = 308,
    e_desecb                             = 309,
    e_descbc                             = 310,
    e_desofb                             = 311,
    e_descfb                             = 312,
    e_rsaSignature                       = 313,
    e_dsaEncryption                      = 314,
    e_dsaWithSHA                         = 315,
    e_shaWithRSAEncryption               = 316,
    e_desede                             = 317,
    e_sha                                = 318,
    e_sha1                               = 319,
    e_dsaWithSHA1old                     = 320,
    e_sha1WithRSA                        = 321,
    e_ripemd160                          = 322,
    e_ripemd160WithRSA                   = 323,
    e_sxnet                              = 324,
    e_x500                               = 325,
    e_x509                               = 326,
    e_commonName                         = 327,
    e_surname                            = 328,
    e_serialNumber                       = 329,
    e_countryName                        = 330,
    e_localityName                       = 331,
    e_stateOrProvinceName                = 332,
    e_organizationName                   = 333,
    e_organizationalUnitName             = 334,
    e_title                              = 335,
    e_description                        = 336,
    e_name                               = 337,
    e_givenName                          = 338,
    e_initials                           = 339,
    e_uniqueIdentifier                   = 340,
    e_dnQualifier                        = 341,
    e_X500algorithms                     = 342,
    e_rsa                                = 343,
    e_mdc2withRSA                        = 344,
    e_mdc2                               = 345,
    e_ldce                               = 346,
    e_subjectKeyIdentifier               = 347,
    e_keyUsage                           = 348,
    e_privateKeyUsagePeriod              = 349,
    e_subjectAlternativeName             = 350,
    e_issuerAlternativeName              = 351,
    e_basicConstraints                   = 352,
    e_crlNumber                          = 353,
    e_crl_reason                         = 354,
    e_invalidity_date                    = 355,
    e_delta_crl                          = 356,
    e_crl_distribution_points            = 357,
    e_certificatePolicies                = 358,
    e_authorityKeyIdentifier             = 359,
    e_ext_key_usage                      = 360,
    e_netscape                           = 361,
    e_netscapeCertificateExtension       = 362,
    e_netscapeCertType                   = 363,
    e_netscapeBaseUrl                    = 364,
    e_netscapeRevocationUrl              = 365,
    e_netscapeCARevocationUrl            = 366,
    e_netscapeRenewalUrl                 = 367,
    e_netscapeCAPolicyUrl                = 368,
    e_netscapeSSLServerName              = 369,
    e_netscapeComment                    = 370,
    e_netscapeDataType                   = 371,
    e_netscapeCertificateSequence        = 372,
    e_ns_sgc                             = 373,

    e_ALL,
    e_LAST = e_ALL-1
};

#endif /* _CASN1OBJECTIDENTIFIERTABLE_HXX */
