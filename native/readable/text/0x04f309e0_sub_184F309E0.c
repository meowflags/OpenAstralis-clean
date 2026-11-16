// sub_4F309E0
// rva 0x04f309e0  size 172  section .text  group text
// window base 0x184f309e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F309E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v19; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+8h] [rbp-10h]
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v20 = a5;
    v21 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v6 )
  {
    v21 = a3;
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 64]);
    v20 = a5;
    v9 = v8(a1, a2, a3: a5);
    if ( (_DWORD *)v9 == v6 )
    {
LABEL_10:
      sub_2771080();
      goto LABEL_11;
    }
    v13 = sub_4FFDFE0(a1: v11, a2: v12, a3: v9, a4: v10, a5: v6 + 94064364);
    if ( (_DWORD *)v13 == v6 )
    {
LABEL_11:
      sub_2771080(a1: v15, a2: v16, a3: v21, a4: v14, a5: v20);
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
      return sub_4F30AA0();
    }
    v17 = sub_4FF37C0(a1: v15, a2: v16, a3: v13);
    if ( *(int *)(v7 + 16) <= 0 )
      v17 = sub_277F280();
    return v17 ^ 0x12D591u;
  }
  v21 = a3;
  sub_2771080();
  goto LABEL_10;
}
