// sub_1827669A0
// rva 0x027669a0  size 1303  section .text  group text
// window base 0x1827669a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827669A0(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, _DWORD *a5, __int64 a6)
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
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  char *v33; // rax
  unsigned __int64 v34; // rbx
  unsigned int v35; // ebx
  int v36; // eax
  __int64 v37; // rcx
  __int64 result; // rax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  char *v44; // rdx
  char v45; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v46; // [rsp+8h] [rbp-60h]
  int v47; // [rsp+14h] [rbp-54h]
  __int64 v48; // [rsp+18h] [rbp-50h]
  __int64 v49; // [rsp+20h] [rbp-48h]
  _DWORD *v50; // [rsp+28h] [rbp-40h]
  unsigned int v51; // [rsp+30h] [rbp-38h]
  int v52; // [rsp+34h] [rbp-34h]
  int v53; // [rsp+38h] [rbp-30h]
  unsigned int v54; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v55; // [rsp+40h] [rbp-28h]
  int v56; // [rsp+44h] [rbp-24h]
  __int64 (__fastcall *v57)(__int64, __int64, _DWORD *); // [rsp+48h] [rbp-20h]
  __int64 (__fastcall *v58)(unsigned __int64, unsigned __int64, _DWORD *); // [rsp+50h] [rbp-18h]
  unsigned int v59; // [rsp+58h] [rbp-10h]
  unsigned int v60; // [rsp+5Ch] [rbp-Ch]
  __int64 v61; // [rsp+60h] [rbp-8h]

  v60 = a3;
  v50 = a5;
  if ( (unsigned __int64)&v45 <= *(_QWORD *)(v8 + 8) )
  {
    v49 = a6;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 34087104;
    v11 = (4LL * (unsigned int)a3 + 19) & 0x7FFFFFFF8LL;
    if ( v11 >= 0x20000 || (a2 = v9 + v11, v9 + v11 > *(_QWORD *)(v8 + 32)) )
    {
      v49 = a6;
      v48 = MEMORY[0x181EAA840](a1, a2, a3: 34087104, a4: 34087104, a5: v60);
      a6 = v49;
      a5 = v50;
      a3 = v60;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = a2;
      *(_QWORD *)v9 = 34087104;
      *(_DWORD *)(v9 + 8) = a3;
      *(_DWORD *)(v9 + 12) = 0;
      if ( v11 - 16 >= 0x800 )
      {
        v49 = a6;
        memset((void *)(v9 + 16), 0, v11 - 16);
        a1 = v9 + v11;
        v10 = 0;
      }
      else
      {
        for ( i = 16; v11 > i; i += 8LL )
          *(_QWORD *)(v9 + i) = 0;
      }
      v48 = v9;
    }
    if ( a3 < 1 )
    {
      v59 = 0;
      v35 = 0;
      v36 = 0;
      v37 = v48;
      v49 = a6;
LABEL_31:
      if ( v36 != 0 )
      {
        v55 = v36;
        v56 = v35;
        result = MEMORY[0x18C965A80](a1, a2, a3: v35, a4: v37);
      }
      else
      {
        v56 = v35;
        v55 = 0;
        result = v37;
      }
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_18277F280(a1, a2, a3: v59);
      return result;
    }
    if ( a5 != v7 )
    {
      v49 = a6;
      v13 = *a5 >> 3;
      v58 = (__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v13 + 102]);
      v47 = v13;
      v14 = v58(a1, a2, a3: a5);
      v57 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v47 + 126]);
      if ( v14 == 115 )
      {
        v56 = 115;
        v46 = v7 + 94162742;
        v55 = v57(a1: v16, a2: v17, a3: v50);
        v42 = MEMORY[0x181E60B40](a1: v40, a2: v41, a3: v46, a4: v39, a5: v55, a6: 0);
        v43 = v48;
        *(_DWORD *)(v48 + 12) = (unsigned __int64)(v42 - (_QWORD)v7) >> 3;
        if ( (*(_DWORD *)v43 & 2) != 0 )
        {
          if ( (*(_DWORD *)v43 & 1) != 0 )
          {
            v44 = (char *)(v43 - *(_QWORD *)(v43 - 8));
            if ( v44[48] != 0 )
              v44[48] = 0;
            v18 = 0;
            v19 = v56;
          }
          else
          {
            if ( *(_BYTE *)((v43 & 0xFFFFFFFFFFF80000LL) + ((v43 - ((v43 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v43 & 0xFFFFFFFFFFF80000LL) + ((v43 - ((v43 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
            v18 = 0;
            v19 = v56;
          }
        }
        else
        {
          v18 = 0;
          v19 = v56;
        }
      }
      else
      {
        v56 = v14;
        sub_182767200(a1: v16, a2: v17, a3: v14, a4: v15, a5: v50);
        v18 = 1;
        v19 = v56;
      }
      v56 = v18;
      v55 = v19;
      v20 = v58;
      v21 = v50;
      v22 = v60;
      v23 = 1;
      while ( v22 > v23 )
      {
        v54 = v23;
        v24 = v20(a1, a2, a3: v21);
        if ( v24 == 115 )
        {
          v53 = v54 + 1;
          v52 = 115;
          v46 = v7 + 94162742;
          v51 = v57(a1: v25, a2: v26, a3: v50);
          v30 = MEMORY[0x181E60B40](a1: v28, a2: v29, a3: v46, a4: v27, a5: v51, a6: 0);
          v22 = v60;
          if ( v60 <= v54 )
            goto LABEL_54;
          v31 = v54;
          v32 = v48;
          *(_DWORD *)(v48 + 4LL * v54 + 12) = (unsigned __int64)(v30 - (_QWORD)v7) >> 3;
          if ( (*(_DWORD *)v32 & 2) != 0 )
          {
            if ( (*(_DWORD *)v32 & 1) != 0 )
            {
              v33 = (char *)(v32 - *(_QWORD *)(v32 - 8));
              v34 = (unsigned __int64)(4 * v31 + 12) >> 9;
              if ( v33[v34 + 48] != 0 )
                v33[v34 + 48] = 0;
              v61 = v6;
              v55 = v52;
              v20 = v58;
              v21 = v50;
              v23 = v53;
            }
            else
            {
              if ( *(_BYTE *)((v32 & 0xFFFFFFFFFFF80000LL) + ((v32 - ((v32 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v32 & 0xFFFFFFFFFFF80000LL) + ((v32 - ((v32 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
              v61 = v6;
              v55 = v52;
              v20 = v58;
              v21 = v50;
              v23 = v53;
            }
          }
          else
          {
            v61 = v6;
            v55 = v52;
            v20 = v58;
            v21 = v50;
            v23 = v53;
          }
        }
        else
        {
          v53 = v54 + 1;
          v52 = v24;
          sub_182767200(a1: v25, a2: v26, a3: v24, a4: v54 + 1, a5: v50);
          v56 = 1;
          v61 = v6;
          v55 = v52;
          v23 = v53;
          v20 = v58;
          v21 = v50;
          v22 = v60;
        }
      }
      v59 = v23;
      v35 = v55;
      v36 = v56;
      v37 = v48;
      goto LABEL_31;
    }
LABEL_53:
    v49 = a6;
    sub_182771080(a1, a2, a3, a4: v10, (_DWORD)a5, a6, a7: v45);
LABEL_54:
    sub_182771220(a1: (_DWORD)v50, a2: v56, a3: v54, a4: v48, a5: v22, a6: v49, a7: v45);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182766EC0();
  }
  v49 = a6;
  sub_182770E80(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v45);
  goto LABEL_53;
}
