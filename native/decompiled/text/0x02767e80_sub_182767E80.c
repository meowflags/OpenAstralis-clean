// sub_182767E80
// rva 0x02767e80  size 649  section .text  group text
// window base 0x182767e80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182767E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 i; // rcx
  __int64 v21; // rdi
  int v22; // ebx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // r9
  unsigned int v32; // eax
  char v34; // [rsp+0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+10h] [rbp-38h]
  __int64 v36; // [rsp+18h] [rbp-30h]
  __int64 v37; // [rsp+20h] [rbp-28h]
  __int64 v38; // [rsp+28h] [rbp-20h]
  int v39; // [rsp+30h] [rbp-18h]
  unsigned int v40; // [rsp+34h] [rbp-14h]
  __int64 v41; // [rsp+38h] [rbp-10h]
  unsigned int v42; // [rsp+44h] [rbp-4h]

  v38 = a3;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v5 + 8) )
  {
    v32 = MEMORY[0x181EB84E0]();
LABEL_22:
    sub_182771220(a1: v9, a2: v10, a3: i, a4: i, a5: v32, a6: v31, a7: v34);
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
    return sub_182768120();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 34161576);
      a3 = v38;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 24;
      *(_DWORD *)v6 = 34161576;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    v37 = v6;
    v42 = *(_DWORD *)(a3 + 8);
    MEMORY[0x185787780](a1, a2, a3: v6, a4, a5: v42);
    if ( v42 != 0 )
    {
      v11 = *(_QWORD *)(v5 + 40);
      v41 = 34084944;
      if ( (unsigned __int64)(v11 + 24) > *(_QWORD *)(v5 + 32) )
      {
        v12 = MEMORY[0x181EAA840](a1: v9, a2: v10, a3: v41, a4: v8, a5: 2);
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v11 + 24;
        *(_QWORD *)v11 = 34084944;
        *(_DWORD *)(v11 + 8) = 2;
        *(_DWORD *)(v11 + 12) = 0;
        *(_QWORD *)(v11 + 16) = 0;
        v12 = v11;
      }
      v13 = *(char *)(v38 + 12);
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v4 + 4LL * (v13 + 128) + 376354740);
      *(_DWORD *)(v12 + 12) = 7273078;
      v36 = v4 + 58184648;
      v35 = v12;
      v40 = v13;
      v14 = sub_1827768E0(a1: v12, a2: v10, a3: 1, a4: v8, a5: v4, a6: v4 + 58184648);
      v15 = v37;
      ++*(_DWORD *)(v37 + 4);
      v16 = *(unsigned int *)(v15 + 12);
      v17 = v4 + 8LL * *(unsigned int *)(v15 + 8);
      v35 = v14;
      MEMORY[0x1857881C0](a1: v16, a2: v19, a3: v15, a4: v18, a5: v14, a6: v17);
      for ( i = 1; ; i = v40 + 1 )
      {
        v30 = v36;
        v31 = v41;
        v32 = v42;
        v7 = v38;
        if ( (int)v42 <= (int)i )
          break;
        if ( v42 <= (unsigned int)i )
          goto LABEL_22;
        v21 = *(_QWORD *)(v5 + 40);
        if ( (unsigned __int64)(v21 + 24) > *(_QWORD *)(v5 + 32) )
        {
          v40 = i;
          v21 = MEMORY[0x181EAA840](a1: v21, a2: v10, a3: v41, a4: i, a5: 2, a6: v41);
          i = v40;
          v30 = v36;
          v7 = v38;
        }
        else
        {
          *(_QWORD *)(v5 + 40) = v21 + 24;
          *(_QWORD *)v21 = v31;
          *(_DWORD *)(v21 + 8) = 2;
          *(_DWORD *)(v21 + 12) = 0;
          *(_QWORD *)(v21 + 16) = 0;
        }
        v22 = *(char *)(v7 + i + 12);
        v23 = *(unsigned int *)(v4 + 4LL * (unsigned int)(v22 + 128) + 376354740);
        *(_DWORD *)(v21 + 16) = v23;
        *(_DWORD *)(v21 + 12) = 7273078;
        v39 = v22;
        v35 = v21;
        v40 = i;
        v24 = sub_1827768E0(a1: v21, a2: v23, a3: 1, a4: i, a5: v4, a6: v30);
        v25 = v37;
        ++*(_DWORD *)(v37 + 4);
        v26 = *(unsigned int *)(v25 + 12);
        v27 = v4 + 8LL * *(unsigned int *)(v25 + 8);
        v35 = v24;
        MEMORY[0x1857881C0](a1: v26, a2: v29, a3: v25, a4: v28, a5: v24, a6: v27);
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_18277F280(a1: v9, a2: v10, a3: v7);
    return v37;
  }
}
