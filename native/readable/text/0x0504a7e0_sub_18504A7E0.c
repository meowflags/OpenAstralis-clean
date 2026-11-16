// sub_504A7E0
// rva 0x0504a7e0  size 212  section .text  group text
// window base 0x18504a7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504A7E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  _DWORD *v9; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  _DWORD *v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  __int64 v21; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
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
    return sub_504A8C0(a1: v13, a2: v14, a3: v11, a4: v12, a5: v15, a6: v16, a7);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v21 = a6;
      v20 = a5;
      v19 = a3;
      v8 = sub_1EAA920(a1: v8, a2, a3: 43309568);
      a6 = v21;
      a5 = v20;
      v9 = v19;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 40;
      *(_DWORD *)v8 = 43309568;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      v9 = a3;
    }
    v18 = v8;
    v19 = v9;
    v20 = a5;
    v21 = a6;
    sub_504A080(a1: a6, a2, a3: v8, a4: (__int64)v20, a5: v9, a6: v20);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return v18;
  }
}
