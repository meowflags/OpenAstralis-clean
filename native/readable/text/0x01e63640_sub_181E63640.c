// sub_1E63640
// rva 0x01e63640  size 200  section .text  group text
// window base 0x181e63640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E63640(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  int v25; // [rsp+0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+8h] [rbp-40h]
  __int64 v27; // [rsp+10h] [rbp-38h]
  __int64 v28; // [rsp+18h] [rbp-30h]
  __int64 v29; // [rsp+20h] [rbp-28h]
  __int64 v30; // [rsp+28h] [rbp-20h]
  _DWORD *v31; // [rsp+30h] [rbp-18h]
  __int64 v32; // [rsp+38h] [rbp-10h]
  unsigned int v33; // [rsp+44h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E63720(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24);
  }
  else
  {
    v32 = a5;
    v33 = a6;
    v31 = a3;
    v30 = sub_1E633C0(a1, a2, a3, a4, a5: a6, a6, a7: v25, a8: v26);
    v29 = sub_1E63720(a1: v8, a2: v9, a3: v31, a4: v7, a5: v33);
    v28 = sub_1E63580(a1: v11, a2: v12, a3: v31, a4: v10, a5: v33, a6: v13, a7: v25, a8: v26);
    v27 = sub_1E617E0(a1: v14, a2: v15, a3: v31);
    v26 = sub_1E617E0(a1: v16, a2: v17, a3: v31);
    result = sub_2767800(a1: v28, a2: v27, a3: v32, a4: v26, a5: v30, a6: v29);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v19, a2: v30, a3: v27, a4: v26);
  }
  return result;
}
