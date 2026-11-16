// sub_182768A80
// rva 0x02768a80  size 363  section .text  group text
// window base 0x182768a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182768A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // r9d
  __int64 i; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // eax
  char v26; // [rsp+0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  __int64 v30; // [rsp+28h] [rbp-10h]
  int v31; // [rsp+30h] [rbp-8h]
  unsigned int v32; // [rsp+34h] [rbp-4h]

  v30 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v5 + 8) )
  {
    v24 = MEMORY[0x181EB84E0]();
LABEL_15:
    sub_182771220(a1: v8, a2: v9, a3: i, a4: i, a5: v24, a6: v16, a7: v26);
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
    return sub_182768C00();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 34161576);
      a3 = v30;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 24;
      *(_DWORD *)v6 = 34161576;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    v29 = v6;
    v32 = *(_DWORD *)(a3 + 8);
    MEMORY[0x185787780](a1, a2, a3: v6, a4, a5: v32);
    if ( v32 != 0 )
    {
      v28 = v4 + 8LL * *(unsigned int *)(v30 + 12);
      v10 = MEMORY[0x18C9639E0](a1: v8, a2: v9, a3: v28);
      v11 = v29;
      ++*(_DWORD *)(v29 + 4);
      v12 = *(unsigned int *)(v11 + 12);
      v13 = v4 + 8LL * *(unsigned int *)(v11 + 8);
      v27 = v10;
      MEMORY[0x1857881C0](a1: v12, a2: v15, a3: v11, a4: v14, a5: v10, a6: v13);
      for ( i = 1; ; i = (unsigned int)(v31 + 1) )
      {
        v24 = v32;
        v7 = v30;
        if ( (int)v32 <= (int)i )
          break;
        if ( v32 <= (unsigned int)i )
          goto LABEL_15;
        v27 = v4 + 8LL * *(unsigned int *)(v30 + 4 * i + 12);
        v31 = i;
        v18 = MEMORY[0x18C9639E0](a1: v8, a2: v9, a3: v27);
        v19 = v29;
        ++*(_DWORD *)(v29 + 4);
        v20 = *(unsigned int *)(v19 + 12);
        v21 = v4 + 8LL * *(unsigned int *)(v19 + 8);
        v28 = v18;
        MEMORY[0x1857881C0](a1: v20, a2: v23, a3: v19, a4: v22, a5: v18, a6: v21);
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_18277F280(a1: v8, a2: v9, a3: v7);
    return v29;
  }
}
