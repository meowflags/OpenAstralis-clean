// Java_sun_net_www_protocol_http_ntlm_NTLMAuthentication_isTrustedSite0
// rva 0x132ae518  size 332  section .text  group text
// window base 0x1932ae518: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall Java_sun_net_www_protocol_http_ntlm_NTLMAuthentication_isTrustedSite0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  char v10; // bl
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v21; // [rsp+50h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-10h] BYREF

  v10 = 0;
  a10 = 0;
  if ( __imp_KERNEL32.dll!GetProcAddress == nullptr || (int)MEMORY[0x337538]/* 0x337538 */(a1: a4, a2, a3: &v22, a4: 0, a5: 0) < 0 )
    return 0;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v12 + 1320LL))(
          a1: v12,
          a2: v13,
          a3: a5,
          a4: v12,
          a5: 0);
  if ( v14 != 0 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, __int64, int *))(*(_QWORD *)v22 + 56LL))(
           a1: v15,
           a2: v14,
           a3: v14,
           a4: v22,
           a5: 6656,
           a6: &a10) >= 0
      && ((a10 - 0x10000) & 0xFFFDFFFF) != 0
      && (a10 == 0
       || a10 == 0x20000
       && (*(int (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int *, _QWORD))(*(_QWORD *)v22 + 40LL))(
            a1: v18,
            a2: v19,
            a3: v19,
            a4: v22,
            a5: &v21,
            a6: 0) >= 0
       && v21 <= 1) )
    {
      v10 = 1;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 1328LL))(
      a1: v18,
      a2: v19,
      a3: a5,
      a4: v18,
      a5: v19);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v15 + 1824LL))(
              a1: v15,
              a2: 0,
              a3: *(_QWORD *)(*(_QWORD *)v15 + 1824LL),
              a4: v15) == 0 )
  {
    JNU_ThrowOutOfMemoryError(a1: v16, a2: v17, a3: 0, a4: v16);
  }
  (*(void (**)(void))(*(_QWORD *)v22 + 16LL))();
  return v10;
}
