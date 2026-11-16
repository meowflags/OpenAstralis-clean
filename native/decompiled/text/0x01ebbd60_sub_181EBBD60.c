// sub_181EBBD60
// rva 0x01ebbd60  size 205  section .text  group text
// window base 0x181ebbd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBBD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  char v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  int v23; // [rsp+24h] [rbp-4h]

  v22 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v20);
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
    return sub_181EBBE40(a1: v18, a2: v19, a3: v17);
  }
  else
  {
    v21 = v6 + 376614152;
    v8 = sub_181EBBE40(a1, a2, a3: a5);
    v11 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v11 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v23 = v8;
      v11 = sub_181EAA920(a1: v9, a2: v10, a3: 40466432);
      v8 = v23;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v11 + 24;
      *(_DWORD *)v11 = 40466432;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
    }
    v12 = v22;
    *(_BYTE *)(v11 + 12) = 1;
    v13 = (unsigned __int64)(v12 - v6) >> 3;
    *(_DWORD *)(v11 + 4) = v13;
    if ( v8 != 0 )
    {
      v21 = v11;
    }
    else
    {
      v15 = v11;
      v16 = v21;
      v21 = v15;
      sub_181EBBEC0(a1: v9, a2: v10, a3: v16, a4: v13, a5: v15);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v21;
  }
}
