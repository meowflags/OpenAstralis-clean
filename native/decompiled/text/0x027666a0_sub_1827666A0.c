// sub_1827666A0
// rva 0x027666a0  size 764  section .text  group text
// window base 0x1827666a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827666A0(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, _DWORD *a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // edx
  int v19; // eax
  __int64 (__fastcall *v20)(unsigned __int64, unsigned __int64, _DWORD *); // rbx
  _DWORD *v21; // r8
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int16 v27; // ax
  int v28; // r9d
  int v29; // ebp
  unsigned int v30; // ebx
  int v31; // eax
  __int64 result; // rax
  __int16 v33; // ax
  char v34; // [rsp+0h] [rbp-58h] BYREF
  int v35; // [rsp+Ch] [rbp-4Ch]
  __int64 v36; // [rsp+10h] [rbp-48h]
  _DWORD *v37; // [rsp+18h] [rbp-40h]
  int v38; // [rsp+24h] [rbp-34h]
  unsigned int v39; // [rsp+28h] [rbp-30h]
  unsigned int v40; // [rsp+2Ch] [rbp-2Ch]
  int v41; // [rsp+30h] [rbp-28h]
  int v42; // [rsp+34h] [rbp-24h]
  __int64 (__fastcall *v43)(__int64, __int64, _DWORD *); // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v44)(unsigned __int64, unsigned __int64, _DWORD *); // [rsp+40h] [rbp-18h]
  unsigned int v45; // [rsp+48h] [rbp-10h]
  unsigned int v46; // [rsp+4Ch] [rbp-Ch]
  __int64 v47; // [rsp+50h] [rbp-8h]

  v46 = a3;
  v37 = a5;
  if ( (unsigned __int64)&v34 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 34168048;
    v11 = (2LL * (unsigned int)a3 + 19) & 0x3FFFFFFF8LL;
    if ( v11 >= 0x20000 || (a2 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
    {
      v36 = MEMORY[0x181EAA840](a1, a2, a3: 34168048, a4: 34168048, a5: v46);
      a5 = v37;
      a3 = v46;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = a2;
      *(_QWORD *)v9 = 34168048;
      *(_DWORD *)(v9 + 8) = a3;
      *(_DWORD *)(v9 + 12) = 0;
      if ( v11 - 16 >= 0x800 )
      {
        memset((void *)(v9 + 16), 0, v11 - 16);
        a1 = v9 + v11;
        v10 = 0;
      }
      else
      {
        for ( i = 16; v11 > i; i += 8LL )
          *(_QWORD *)(v9 + i) = 0;
      }
      v36 = v9;
    }
    if ( a3 < 1 )
    {
      v45 = 0;
      v30 = 0;
      v31 = 0;
LABEL_21:
      if ( v31 != 0 )
      {
        v41 = v31;
        v42 = v30;
        result = MEMORY[0x18C965A80](a1, a2, a3: v30, a4: v36);
      }
      else
      {
        v42 = v30;
        v41 = 0;
        result = v36;
      }
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_18277F280(a1, a2, a3: v45);
      return result;
    }
    if ( a5 != v7 )
    {
      v13 = *a5 >> 3;
      v44 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v13 + 102]);
      v35 = v13;
      v14 = v44(a1, a2, a3: a5);
      v43 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v35 + 134]);
      if ( v14 == 83 )
      {
        v42 = 83;
        v33 = v43(a1: v16, a2: v17, a3: v37);
        *(_WORD *)(v36 + 12) = v33;
        v18 = 0;
      }
      else
      {
        v42 = v14;
        sub_182767200(a1: v16, a2: v17, a3: v14, a4: v15, a5: v37);
        v18 = 1;
      }
      v19 = v42;
      v42 = v18;
      v41 = v19;
      v20 = v44;
      v21 = v37;
      v22 = v46;
      v23 = 1;
      while ( v22 > v23 )
      {
        v40 = v23;
        v24 = v20(a1, a2, a3: v21);
        if ( v24 == 83 )
        {
          v39 = v40 + 1;
          v38 = 83;
          v27 = v43(a1: v25, a2: v26, a3: v37);
          v22 = v46;
          if ( v46 <= v40 )
            goto LABEL_34;
          a2 = v39;
          v29 = v38;
          *(_WORD *)(v36 + 2LL * v40 + 12) = v27;
          v41 = v29;
          v20 = v44;
          v21 = v37;
          v23 = a2;
        }
        else
        {
          v39 = v40 + 1;
          v38 = v24;
          sub_182767200(a1: v25, a2: v26, a3: v24, a4: v40 + 1, a5: v37);
          v42 = 1;
          v47 = v6;
          v41 = v38;
          v23 = v39;
          v20 = v44;
          v21 = v37;
          v22 = v46;
        }
      }
      v45 = v23;
      v30 = v41;
      v31 = v42;
      goto LABEL_21;
    }
LABEL_33:
    sub_182771080(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7: v34);
LABEL_34:
    sub_182771220(a1, a2: (_DWORD)v37, a3: v40, a4: v36, a5: v22, a6: v28, a7: v34);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1827669A0();
  }
  sub_182770E80(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v34);
  goto LABEL_33;
}
