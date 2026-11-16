// sub_182757260
// rva 0x02757260  size 151  section .text  group text
// window base 0x182757260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182757260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64, __int64); // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  char v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+10h] [rbp-18h]
  __int64 v24; // [rsp+18h] [rbp-10h]
  __int64 (__fastcall *v25)(__int64, __int64, __int64, __int64, __int64, __int64); // [rsp+20h] [rbp-8h]

  v24 = a3;
  v23 = a5;
  v22 = a6;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( *(_BYTE *)(a3 + 36) == 0 )
  {
    sub_1827575A0(a1, a2, a3, a4: a5, a5, a6, a7: v21);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(v24 + 8);
    if ( v12 != nullptr )
      v12 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))((char *)v12 + v6);
    v25 = v12;
    v13 = sub_1827573E0(a1: v10, a2: v11, a3: v24, a4: v9, a5: v23);
    result = v25(a1: v15, a2: v16, a3: v23, a4: v14, a5: v22, a6: v13);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_18277F280(a1: v19, a2: v20, a3: v18);
    return result;
  }
  MEMORY[0x1828C1C40](a1, a2, a3: v7 + 371525336);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182757300();
}
