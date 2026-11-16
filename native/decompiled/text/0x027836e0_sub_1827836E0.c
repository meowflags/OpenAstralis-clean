// sub_1827836E0
// rva 0x027836e0  size 710  section .text  group text
// window base 0x1827836e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827836E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  char *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  char v32; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+10h] [rbp-48h]
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]
  char *v36; // [rsp+20h] [rbp-38h]
  _QWORD *v37; // [rsp+28h] [rbp-30h]
  unsigned __int64 v38; // [rsp+30h] [rbp-28h]
  unsigned __int64 v39; // [rsp+38h] [rbp-20h]
  int v40; // [rsp+44h] [rbp-14h]
  _QWORD *v41; // [rsp+48h] [rbp-10h]
  unsigned __int64 v42; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v7 + 8) )
  {
    v42 = a5;
    MEMORY[0x181EB83C0]();
    goto LABEL_42;
  }
  if ( a6 == 0 )
  {
    if ( v7 != *(_QWORD *)(v6 + 376351704) )
      goto LABEL_8;
    v14 = *(unsigned int *)(v6 + 376351692);
    if ( (_DWORD)v14 != 0 )
    {
      a3 = *(unsigned int *)(v6 + 8 * v14 + 4);
      if ( (_DWORD)a3 != 0 )
      {
        if ( *(_DWORD *)(v6 + 8 * a3 + 8) == 47076659 )
          goto LABEL_3;
LABEL_8:
        if ( *(int *)(v7 + 16) <= 0 )
        {
          v42 = a5;
          sub_18277F280(a1, a2, a3, a4);
        }
        return 0;
      }
LABEL_43:
      sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v32);
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1827839C0(a1: v30, a2: v31, a3: v29);
    }
LABEL_42:
    v42 = a5;
    sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v32);
    goto LABEL_43;
  }
LABEL_3:
  v8 = *(_QWORD **)(v6 + 376178832);
  if ( v8 == nullptr )
  {
LABEL_4:
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v40 = a6;
      v42 = a5;
      sub_18277F280(a1, a2, a3: (__int64)v8, a4);
    }
    return 0;
  }
  v10 = v6 + 376612120;
  if ( v8 == (_QWORD *)a5 )
  {
LABEL_12:
    v41 = v8;
    v40 = a6;
    v42 = a5;
    MEMORY[0x182084840](a1, a2, a3: v10, a4: v6 + 360717032, a5: v6 + 360717032);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_18277F280(a1: v12, a2: v13, a3: v11, a4: (__int64)v41);
    return 1;
  }
  else
  {
    a4 = v8[29];
    v15 = v8[30];
    if ( a4 <= a5 || v15 > a5 )
    {
      if ( (unsigned __int64)v8 > a5 || (v16 = (char *)v8 + 356, (unsigned __int64)v8 + 356 <= a5) )
      {
        v8 = (_QWORD *)v8[32];
        while ( v8 != nullptr )
        {
          if ( v8 == (_QWORD *)a5 )
            goto LABEL_12;
          a4 = v8[29];
          v15 = v8[30];
          if ( a4 > a5 && v15 <= a5 )
            goto LABEL_34;
          v16 = (char *)v8 + 356;
          if ( (unsigned __int64)v8 <= a5 && (unsigned __int64)v16 > a5 )
            goto LABEL_38;
          a2 = v8[32];
          if ( *(int *)(v7 + 16) <= 0 )
          {
            v10 = sub_18277F280(a1, a2, a3: (__int64)v8, a4);
            v8 = (_QWORD *)a2;
          }
          else
          {
            v8 = (_QWORD *)v8[32];
          }
        }
        goto LABEL_4;
      }
LABEL_38:
      v36 = v16;
      v35 = v15;
      v34 = a4;
      v33 = v8;
      v40 = a6;
      v42 = a5;
      v23 = MEMORY[0x182084840](a1, a2, a3: v10, a4, a5: v6 + 352677392);
      MEMORY[0x182084BC0](a1: v25, a2: v26, a3: v23, a4: v24, a5: v33);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v27, a2: v28, a3: v35, a4: v34);
      return 1;
    }
    else
    {
LABEL_34:
      v39 = v15;
      v38 = a4;
      v37 = v8;
      v40 = a6;
      v42 = a5;
      v17 = MEMORY[0x182084840](a1, a2, a3: v10, a4, a5: v6 + 352677472);
      MEMORY[0x182084BC0](a1: v19, a2: v20, a3: v17, a4: v18, a5: v37);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v21, a2: v22, a3: v39, a4: v38);
      return 1;
    }
  }
}
