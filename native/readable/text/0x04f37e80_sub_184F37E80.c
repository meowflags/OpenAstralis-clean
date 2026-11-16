// sub_4F37E80
// rva 0x04f37e80  size 175  section .text  group text
// window base 0x184f37e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F37E80(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  char v15; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+14h] [rbp-14h]
  _DWORD *v17; // [rsp+18h] [rbp-10h]
  int v18; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F37F40();
  }
  v9 = *a3 >> 3;
  if ( (a5 & 0xFFFF0000) != 0 )
  {
    v16 = *a3 >> 3;
    v17 = a3;
    v18 = a5;
    v10 = sub_4F4B200(a1, a2, a3: a5, a4, a5, a6, a7: v15);
    v11 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v6 + *(_QWORD *)(v7 + 8LL * v16 + 200));
    result = v11(a1: v12, a2: v13, a3: v17, a4: v11, a5: v10);
    if ( *(int *)(v8 + 16) > 0 )
      return result;
    return sub_277F280();
  }
  v18 = a5;
  v17 = a3;
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v6 + *(_QWORD *)(v7 + 8LL * v9 + 120)))(
             a1,
             a2,
             a3,
             a4: v9,
             (unsigned __int16)a5);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
