// sub_182767CC0
// rva 0x02767cc0  size 424  section .text  group text
// window base 0x182767cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182767CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // r9d
  __int64 i; // rcx
  __int64 v18; // r9
  unsigned int v19; // ebp
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r8
  char v24; // [rsp+0h] [rbp-38h] BYREF
  __int64 v25; // [rsp+10h] [rbp-28h]
  __int64 v26; // [rsp+18h] [rbp-20h]
  __int64 v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+2Ch] [rbp-Ch]
  int v29; // [rsp+30h] [rbp-8h]
  unsigned int v30; // [rsp+34h] [rbp-4h]

  v27 = a3;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v5 + 8) )
  {
    v21 = MEMORY[0x181EB84E0]();
LABEL_22:
    sub_182771220(a1: v8, a2: v9, a3: i, a4: i, a5: v21, a6: v16, a7: v24);
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
    return sub_182767E80();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 34161576);
      a3 = v27;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 24;
      *(_DWORD *)v6 = 34161576;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    v26 = v6;
    v30 = *(_DWORD *)(a3 + 8);
    MEMORY[0x185787780](a1, a2, a3: v6, a4, a5: v30);
    if ( v30 != 0 )
    {
      v10 = *(unsigned __int8 *)(v27 + 12);
      if ( *(_BYTE *)(v27 + 12) != 0 )
        v11 = v4 + 350970688;
      else
        v11 = v4 + 361697768;
      v29 = *(unsigned __int8 *)(v27 + 12);
      v12 = v11;
      v13 = v26;
      ++*(_DWORD *)(v26 + 4);
      v14 = *(unsigned int *)(v13 + 12);
      v15 = v4 + 8LL * *(unsigned int *)(v13 + 8);
      v25 = v12;
      MEMORY[0x1857881C0](a1: v14, a2: v9, a3: v13, a4: v10, a5: v12, a6: v15);
      for ( i = 1; ; i = (unsigned int)(v28 + 1) )
      {
        v21 = v30;
        v22 = v26;
        v7 = v27;
        if ( (int)v30 <= (int)i )
          break;
        if ( v30 <= (unsigned int)i )
          goto LABEL_22;
        if ( *(_BYTE *)(v27 + i + 12) != 0 )
          v18 = v4 + 350970688;
        else
          v18 = v4 + 361697768;
        v29 = *(unsigned __int8 *)(v27 + i + 12);
        v28 = i;
        ++*(_DWORD *)(v26 + 4);
        v19 = *(_DWORD *)(v22 + 12);
        v20 = v4 + 8LL * *(unsigned int *)(v22 + 8);
        v25 = v18;
        MEMORY[0x1857881C0](a1: v19, a2: v9, a3: v22, a4: i, a5: v18, a6: v20);
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_18277F280(a1: v8, a2: v9, a3: v7);
    return v26;
  }
}
