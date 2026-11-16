// sub_132AE49C
// rva 0x132ae49c  size 124  section .text  group text
// window base 0x1932ae49c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132AE49C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // [rsp+30h] [rbp+8h]
  __int64 v23; // [rsp+38h] [rbp+10h]

  v22 = v9;
  v23 = v10;
  v11 = a6;
  v12 = a5;
  v14 = a4;
  if ( a4 != 0 )
  {
    __imp_Secur32.dll!FreeCredentialsHandle(a1: a4, a2: a5);
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v16, a2: v17, a3: v15, a4: v16);
  }
  if ( a3 != 0 )
  {
    __imp_Secur32.dll!DeleteSecurityContext(a1: v14, a2: v12, a3, a4: a3);
    __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v19, a2: v20, a3: v18, a4: a3);
  }
  LOBYTE(a6) = 1;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 840LL))(
           a1: v14,
           a2,
           a3: v11,
           a4: v12,
           a5: MEMORY[0x337530]/* 0x337530 */,
           a6,
           a7: v22,
           a8: v23,
           a9: a2);
}
