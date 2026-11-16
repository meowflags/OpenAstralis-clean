// Java_sun_net_www_protocol_http_ntlm_NTLMAuthSequence_initFirst
// rva 0x132ae3f8  size 164  section .text  group text
// window base 0x1932ae3f8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_www_protocol_http_ntlm_NTLMAuthSequence_initFirst(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
             a1: a3,
             a2: a5,
             a3,
             a4,
             a5: 539104,
             a6: 534440);
  MEMORY[0x337520] = result;
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
               a1: v7,
               a2: v8,
               a3: v7,
               a4,
               a5: 539120,
               a6: 534440);
    MEMORY[0x337528] = result;
    if ( result != 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                 a1: v9,
                 a2: v10,
                 a3: v10,
                 a4,
                 a5: 539136,
                 a6: 537192);
      MEMORY[0x337530] = result;
    }
  }
  return result;
}
