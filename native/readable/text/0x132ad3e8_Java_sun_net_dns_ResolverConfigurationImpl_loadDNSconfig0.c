// Java_sun_net_dns_ResolverConfigurationImpl_loadDNSconfig0
// rva 0x132ad3e8  size 219  section .text  group text
// window base 0x1932ad3e8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_net_dns_ResolverConfigurationImpl_loadDNSconfig0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-838h] BYREF
  _BYTE v16[1024]; // [rsp+20h] [rbp-818h] BYREF
  _BYTE v17[1024]; // [rsp+420h] [rbp-418h] BYREF
  __int64 v18; // [rsp+820h] [rbp-18h]

  v16[0] = 0;
  v17[0] = 0;
  if ( (unsigned int)sub_132AD518(a1: a3, a2, a3: v16, a4, a5: v17) != -1 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64))(*(_QWORD *)a4 + 1336LL))(
            a1: v6,
            a2: v7,
            a3: v16,
            a4);
    if ( v10 != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1232LL))(
        a1: v6,
        a2: v7,
        a3: v6,
        a4,
        a5: MEMORY[0x337508]/* 0x337508 */,
        a6: v10);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64))(*(_QWORD *)a4 + 1336LL))(
              a1: v11,
              a2: v12,
              a3: v17,
              a4);
      if ( v13 != 0 )
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1232LL))(
          a1: v6,
          a2: v7,
          a3: v6,
          a4,
          a5: MEMORY[0x337510]/* 0x337510 */,
          a6: v13);
    }
  }
  return sub_132C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v15 ^ v18, a5: v8, a6: v9);
}
