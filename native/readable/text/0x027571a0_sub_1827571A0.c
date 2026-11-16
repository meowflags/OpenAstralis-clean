// sub_27571A0
// rva 0x027571a0  size 183  section .text  group text
// window base 0x1827571a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27571A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64, __int64); // r9
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a5;
    v18 = a3;
    v8 = sub_1EB84E0();
LABEL_12:
    v19 = a5;
    v18 = a3;
    sub_15ACE20(a1, a2, a3: v6 + 8 * v8);
    a5 = v19;
    a3 = v18;
    goto LABEL_5;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 != 0 )
  {
    v9 = *(unsigned int *)(v6 + 8 * v8 + 28);
    if ( (_DWORD)v9 == 0 )
    {
      sub_2771080(a1, a2, a3, a4, a5, a6: 0, a7: v17);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_2757260();
    }
    if ( *(_BYTE *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v9 + 44) + 34) != 0 )
      goto LABEL_12;
  }
LABEL_5:
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(a3 + 8);
  if ( v10 != nullptr )
    v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))((char *)v10 + v5);
  v11 = v10;
  v12 = *(_QWORD *)(a3 + 24);
  if ( v12 != 0 )
    v12 += v5;
  v18 = a3;
  v19 = a5;
  result = v11(a1, a2, a3: v6, a4, a5, a6: v12);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v15, a2: v16, a3: v14);
  return result;
}
