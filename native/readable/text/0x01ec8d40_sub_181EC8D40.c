// sub_1EC8D40
// rva 0x01ec8d40  size 684  section .text  group text
// window base 0x181ec8d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC8D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 i; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // edx
  char *v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  char *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  char v32; // [rsp+0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+8h] [rbp-20h]
  __int64 v34; // [rsp+10h] [rbp-18h]
  __int64 v35; // [rsp+18h] [rbp-10h]
  unsigned int v36; // [rsp+20h] [rbp-8h]
  signed int v37; // [rsp+24h] [rbp-4h]

  v35 = a3;
  v34 = a5;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v32);
LABEL_38:
    LODWORD(v16) = sub_2771080();
LABEL_39:
    sub_2771220(a1, a2: v12, a3: (unsigned int)v16, a4: (unsigned int)v16, a5: (unsigned int)v10);
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
    return sub_1EC9000(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31);
  }
  if ( a3 == v6 )
    goto LABEL_38;
  v8 = *(_QWORD *)(v7 + 40);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *(unsigned int *)(a3 + 8);
  v37 = v10;
  v11 = (4LL * (unsigned int)v10 + 19) & 0x7FFFFFFF8LL;
  v12 = 34085384;
  if ( v11 >= 0x20000 || (a1 = v8 + v11, v8 + v11 > v9) )
  {
    v33 = sub_1EAA840(a1, a2: 34085384, a3: 34085384, a4: v10, a5: v37);
    v10 = (unsigned int)v37;
    a5 = v34;
    a3 = v35;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = a1;
    *(_QWORD *)v8 = 34085384;
    *(_DWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 12) = 0;
    if ( v11 - 16 >= 0x800 )
    {
      memset((void *)(v8 + 16), 0, v11 - 16);
      a1 = v8 + v11;
      v10 = (unsigned int)v37;
    }
    else
    {
      for ( i = 16; v11 > i; i += 8LL )
        *(_QWORD *)(v8 + i) = 0;
    }
    v33 = v8;
  }
  if ( (_DWORD)v10 != 0 )
  {
    v14 = sub_1EC9000(a1, a2: v12, a3: v6 + 8LL * *(unsigned int *)(a3 + 12), a4: v10, a5);
    v15 = v33;
    *(_DWORD *)(v33 + 12) = (unsigned __int64)(v14 - v6) >> 3;
    if ( (*(_DWORD *)v15 & 2) != 0 )
    {
      if ( (*(_DWORD *)v15 & 1) != 0 )
      {
        v26 = (char *)(v15 - *(_QWORD *)(v15 - 8));
        if ( v26[48] != 0 )
          v26[48] = 0;
      }
      else if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - ((v15 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
      {
        *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - ((v15 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
      }
    }
    v16 = 1;
    while ( 1 )
    {
      v10 = (unsigned int)v37;
      a5 = v34;
      a3 = v35;
      if ( v37 <= (int)v16 )
        break;
      if ( v37 <= (unsigned int)v16 )
        goto LABEL_39;
      v17 = v6 + 8LL * *(unsigned int *)(v35 + 4 * v16 + 12);
      v36 = v16;
      v18 = sub_1EC9000(a1, a2: v12, a3: v17, a4: (unsigned int)v37, a5: v34);
      v19 = v33;
      v20 = v36;
      *(_DWORD *)(v33 + 4LL * v36 + 12) = (unsigned __int64)(v18 - v6) >> 3;
      v21 = v20 + 1;
      if ( (*(_DWORD *)v19 & 2) != 0 )
      {
        if ( (*(_DWORD *)v19 & 1) != 0 )
        {
          v22 = (char *)(v19 - *(_QWORD *)(v19 - 8));
          v23 = (unsigned __int64)(4 * v20 + 12) >> 9;
          if ( v22[v23 + 48] != 0 )
            v22[v23 + 48] = 0;
          v16 = v21;
        }
        else
        {
          if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - ((v19 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - ((v19 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
          v16 = v21;
        }
      }
      else
      {
        v16 = v21;
      }
    }
  }
  v24 = v33;
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1, a2: v12, a3, a4: v10, a5);
  return v24;
}
