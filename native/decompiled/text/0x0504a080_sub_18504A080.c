// sub_18504A080
// rva 0x0504a080  size 459  section .text  group text
// window base 0x18504a080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504A080(__int64 a1, int a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // edx
  _DWORD *v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 result; // rax
  unsigned __int64 v17; // rbx
  char v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+8h] [rbp-30h]
  __int64 v20; // [rsp+10h] [rbp-28h]
  _DWORD *v21; // [rsp+18h] [rbp-20h]
  _DWORD *v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+34h] [rbp-4h]

  v23 = a3;
  v22 = a5;
  v21 = a6;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18504A260();
  }
  else
  {
    v20 = a1;
    sub_18504A8C0(a1, a2, a3, a4: (_DWORD)a5, (_DWORD)a5, a6: a1, a7: v18);
    if ( v22 == v6 )
    {
      v10 = 0;
      v11 = v21;
    }
    else
    {
      v10 = *(_DWORD *)((char *)v22 + (int)v6[2 * (*v22 >> 3) + 13]);
      if ( v10 == 0 )
        v10 = MEMORY[0x181ED7320](a1: v8, a2: v9, a3: v22);
      v11 = v21;
    }
    if ( v11 == v6 )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      v12 = *(unsigned int *)((char *)v11 + (int)v6[2 * (*v11 >> 3) + 13]);
      if ( (_DWORD)v12 == 0 )
      {
        v24 = v10;
        LODWORD(v12) = MEMORY[0x181ED7320](a1: v12, a2: v9, a3: v21);
        v10 = v24;
        v11 = v21;
      }
    }
    v13 = v23;
    *(_DWORD *)(v23 + 24) = v12 ^ v10;
    v14 = *(_QWORD *)(v7 + 40);
    v15 = v14 + 32;
    if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v14 = MEMORY[0x181EAA920](a1: v15, a2: v9, a3: 43309240);
      v11 = v21;
      v13 = v23;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v15;
      *(_DWORD *)v14 = 43309240;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
    }
    v19 = v14;
    sub_185049EE0(a1: v20, a2: v9, a3: v14, a4: v14, a5: v13, a6: (__int64)v11, a7: v18);
    result = v23;
    *(_DWORD *)(v23 + 20) = (unsigned __int64)(v19 - (_QWORD)v6) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v17 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v17) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
