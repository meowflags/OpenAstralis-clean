// sub_50468A0
// rva 0x050468a0  size 200  section .text  group text
// window base 0x1850468a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50468A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  __int64 v30; // [rsp+28h] [rbp-10h]
  __int64 v31; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v9 + 8) )
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
    return sub_5046980(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  else
  {
    v30 = a1;
    v31 = a6;
    v29 = a5;
    v28 = a3;
    v10 = (_DWORD *)sub_277F7C0();
    if ( v10 == v8 || (v14 = *v10 >> 3, SHIWORD(v8[2 * v14 + 15]) < 3) || v8[2 * v8[2 * v14 + 4] + 5] != 81882 )
    {
      v27 = v10;
      result = sub_5043080(a1: v12, a2: v13, a3: v29, a4: v11, a5: v31, a6: v30);
      if ( *(int *)(v9 + 16) <= 0 )
        return sub_277F280();
    }
    else
    {
      v16 = *(_QWORD *)&v8[2 * (*v10 >> 3) + 116];
      v27 = v10;
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v7 + v16))(
                 a1: v30,
                 a2: v13,
                 a3: v10,
                 a4: v16,
                 a5: v29,
                 a6: v31);
      if ( *(int *)(v9 + 16) <= 0 )
        return sub_277F280(a1: v18, a2: v19, a3: v17, a4: v27);
    }
  }
  return result;
}
