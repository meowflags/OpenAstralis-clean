// sub_275DA80
// rva 0x0275da80  size 175  section .text  group text
// window base 0x18275da80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275DA80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  int *v12; // rax
  int v13; // xmm0_4
  __int64 result; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+24h] [rbp-4h]

  v23 = a3;
  v22 = a5;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
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
    return sub_275DB40(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    sub_275A260(a1, a2, a3, a4: (int)a5, a5);
    v11 = v23;
    v12 = *(int **)(v23 + 8);
    if ( v22 == v7 )
      v13 = *v12;
    else
      v13 = *(int *)((char *)v12 + (_QWORD)v22);
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
    {
      v24 = v13;
      result = sub_1EAA920(a1: v9, a2: v10, a3: 34239568);
      v13 = v24;
      v11 = v23;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 16;
      *(_DWORD *)result = 34239568;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    *(_DWORD *)(result + 4) = v13;
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v9, a2: v10, a3: v11);
  }
  return result;
}
