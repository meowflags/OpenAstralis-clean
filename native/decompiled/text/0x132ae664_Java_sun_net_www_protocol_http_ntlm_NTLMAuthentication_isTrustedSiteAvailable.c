// Java_sun_net_www_protocol_http_ntlm_NTLMAuthentication_isTrustedSiteAvailable
// rva 0x132ae664  size 55  section .text  group text
// window base 0x1932ae664: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall Java_sun_net_www_protocol_http_ntlm_NTLMAuthentication_isTrustedSiteAvailable(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi

  v6 = sub_1932B89EC(a1, a2, a3, a4: 539168, a5, a6);
  if ( v6 != 0 )
  {
    MEMORY[0x337538] = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MEMORY[0x79738](
                                                                                         a1: v7,
                                                                                         a2: v8,
                                                                                         a3: 539184,
                                                                                         a4: v6);
    LOBYTE(v6) = MEMORY[0x337538] != nullptr;
  }
  return v6;
}
