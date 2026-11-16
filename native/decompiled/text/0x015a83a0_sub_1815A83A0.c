// sub_1815A83A0
// rva 0x015a83a0  size 559  section .text  group text
// window base 0x1815a83a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A83A0(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 j; // rcx
  unsigned __int64 i; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]
  __int64 v27; // [rsp+10h] [rbp-28h]
  unsigned int v28; // [rsp+1Ch] [rbp-1Ch]
  _BYTE *v29; // [rsp+20h] [rbp-18h]
  __int64 v30; // [rsp+28h] [rbp-10h]
  unsigned int v31; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v6 + 8) )
  {
    v30 = a5;
    v29 = a3;
    v7 = MEMORY[0x181EB84E0]();
LABEL_26:
    v31 = v7;
    v30 = a5;
    v29 = a3;
    v7 = MEMORY[0x182770E80](a1, a2, a3: v7);
LABEL_27:
    MEMORY[0x182771220](a1: v10, a2: a5, a3: (unsigned int)j, a4: j, a5: v7, a6: v14);
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
    return sub_1815A85E0(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24);
  }
  v7 = a5;
  if ( (int)a5 < 0 )
    goto LABEL_26;
  v8 = *(_QWORD *)(v6 + 40);
  v9 = *(_QWORD *)(v6 + 32);
  v10 = 34082368;
  v11 = ((unsigned int)a5 + 19LL) & 0x1FFFFFFF8LL;
  if ( v11 >= 0x20000 || (a4 = v8 + v11, v8 + v11 > v9) )
  {
    v31 = a5;
    v30 = a5;
    v29 = a3;
    v8 = MEMORY[0x181EAA840](a1: 34082368, a2: v11, a3: 34082368, a4, (unsigned int)a5, a6: v9);
    v7 = v31;
    a5 = v30;
    a3 = v29;
  }
  else
  {
    *(_QWORD *)(v6 + 40) = a4;
    *(_QWORD *)v8 = 34082368;
    *(_DWORD *)(v8 + 8) = a5;
    *(_DWORD *)(v8 + 12) = 0;
    j = v11 - 16;
    if ( v11 - 16 >= 0x800 )
    {
      v31 = a5;
      v30 = a5;
      v29 = a3;
      memset((void *)(v8 + 16), 0, j);
      v10 = v8 + v11;
      j = 0;
      v7 = v31;
    }
    else
    {
      for ( i = 16; v11 > i; i += 8LL )
        *(_QWORD *)(v8 + i) = 0;
    }
  }
  if ( v7 != 0 )
  {
    *(_BYTE *)(v8 + 12) = *a3;
    for ( j = 1; (int)v7 > (int)j; j = (unsigned int)(j + 1) )
    {
      v14 = (unsigned int)(char)a3[(int)j];
      if ( v7 <= (unsigned int)j )
        goto LABEL_27;
      *(_BYTE *)(v8 + j + 12) = a3[(int)j];
    }
    v28 = j;
  }
  else
  {
    v28 = 0;
  }
  v15 = *(_QWORD *)(v6 + 40);
  v16 = v15 + 24;
  if ( (unsigned __int64)(v15 + 24) > *(_QWORD *)(v6 + 32) )
  {
    v27 = v8;
    v31 = v7;
    v30 = a5;
    v29 = a3;
    v15 = MEMORY[0x181EAA920](a1: v16, a2: v11, a3: 34082680);
    v8 = v27;
    v7 = v31;
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v16;
    *(_DWORD *)v15 = 34082680;
    *(_DWORD *)(v15 + 4) = 0;
    *(_QWORD *)(v15 + 8) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    v30 = a5;
    v29 = a3;
  }
  v26 = v15;
  v27 = v8;
  MEMORY[0x184FE98A0](a1: 0, a2: v7, a3: v15, a4: j, a5: v5 + 376359568, a6: v8);
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v17, a2: v18, a3: v28);
  return v26;
}
