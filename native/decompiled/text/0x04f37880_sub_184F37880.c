// sub_184F37880
// rva 0x04f37880  size 817  section .text  group text
// window base 0x184f37880: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F37880(_DWORD *a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rbp
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  _DWORD *v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rbx
  _DWORD *v32; // r8
  __int64 v33; // rcx
  _DWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 (__fastcall *v36)(_DWORD *, __int64, _DWORD *, __int64, _QWORD); // rax
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // [rsp+0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+10h] [rbp-48h]
  _DWORD *v48; // [rsp+18h] [rbp-40h]
  _DWORD *v49; // [rsp+20h] [rbp-38h]
  _DWORD *v50; // [rsp+28h] [rbp-30h]
  unsigned int v51; // [rsp+30h] [rbp-28h]
  unsigned int v52; // [rsp+34h] [rbp-24h]
  unsigned int v53; // [rsp+38h] [rbp-20h]
  unsigned int v54; // [rsp+3Ch] [rbp-1Ch]
  int v55; // [rsp+40h] [rbp-18h]
  unsigned int v56; // [rsp+44h] [rbp-14h]
  unsigned int v57; // [rsp+48h] [rbp-10h]
  unsigned int v58; // [rsp+4Ch] [rbp-Ch]
  __int64 v59; // [rsp+50h] [rbp-8h]

  v50 = a1;
  v58 = a4;
  if ( (unsigned __int64)&v46 <= *(_QWORD *)(v8 + 8) )
  {
    v57 = a2;
    v56 = a6;
    MEMORY[0x181EB84E0]();
LABEL_25:
    MEMORY[0x182771080]();
    goto LABEL_26;
  }
  v49 = a3;
  if ( a5 != 0 )
  {
    v55 = a5;
    v56 = a6;
    v57 = a2;
    MEMORY[0x185022000](a1: (unsigned int)a2, a2: (unsigned int)a4, a3, a4, a5: a6, a6: a1);
LABEL_4:
    v9 = v49;
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (__int64)v9;
  }
  v57 = a2;
  v56 = a6;
  v55 = 0;
  if ( (int)a4 <= (int)a2 )
    goto LABEL_4;
  if ( a1 == v7 )
    goto LABEL_25;
  if ( (unsigned __int16)v7[2 * v7[2 * (*a1 >> 3) + 5]
                          + 3
                          + (v7[2 * (*a1 >> 3) + 11] & (0x568u >> HIBYTE(v7[2 * (*a1 >> 3) + 11])))] != 1384 )
  {
LABEL_26:
    MEMORY[0x182770780]();
    goto LABEL_27;
  }
  v11 = *a1 >> 3;
  v12 = v7[2 * v11 + 11];
  v48 = &v7[2 * v7[2 * v11 + 5]];
  v13 = HIBYTE(v12);
  v54 = v12 & (0x568u >> SHIBYTE(v12));
  v14 = v48[v54 + 3];
  v47 = (__int64)&v7[2 * v11];
  v15 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64, _QWORD))(v6 + *(_QWORD *)(v47 + HIWORD(v14))))(
          a1,
          a2,
          a3: a1,
          a4: v13,
          a5: v57);
  if ( v15 < 0x100 )
  {
    v27 = v49;
    v28 = v56 + 1;
    if ( v49 != v7 )
    {
      v29 = (unsigned int)v49[2];
      if ( (unsigned int)v29 > v56 )
      {
        v53 = v49[2];
        *((_BYTE *)v49 + v56 + 12) = v15;
        v30 = v57 + 1;
        v52 = v28;
        v31 = v54;
        v32 = v48;
        v33 = v58;
        v34 = v50;
        v35 = v47;
        while ( (int)v33 > (int)v30 )
        {
          v36 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64, _QWORD))(v6
                                                                                     + *(_QWORD *)(v35
                                                                                                 + HIWORD(v32[v31 + 3])));
          v51 = v30;
          v37 = v36(a1: v34, a2: v30, a3: v34, a4: v33, a5: (unsigned int)v30);
          if ( v37 >= 0x100 )
          {
            v53 = v37;
            v20 = v52;
            v59 = v6;
            v54 = v51;
            goto LABEL_12;
          }
          v38 = v53;
          v39 = v52 + 1;
          if ( v53 <= v52 )
            goto LABEL_29;
          *((_BYTE *)v49 + v52 + 12) = v37;
          v30 = v51 + 1;
          v52 = v39;
          v35 = v47;
          v31 = v54;
          v32 = v48;
          v33 = v58;
          v34 = v50;
        }
        goto LABEL_4;
      }
      goto LABEL_28;
    }
LABEL_27:
    MEMORY[0x182771080](a1: v17, a2: v18, a3: v27, a4: v16, a5: v19, a6: v28);
LABEL_28:
    MEMORY[0x182771220](a1: v17, a2: v18, a3: v56, a4: v29, a5: (unsigned int)v29, a6: v28);
LABEL_29:
    MEMORY[0x182771220](a1: v50, a2: v58, a3: v52, a4: v38, a5: (unsigned int)v38, a6: v51);
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
    return sub_184F37BC0(a1: v42, a2: v43, a3: v40, a4: v41, a5: v44, a6: v45);
  }
  v53 = v15;
  v20 = v56;
  v59 = v6;
  v54 = v57;
LABEL_12:
  v52 = v20;
  v47 = sub_184F395A0(a1: v17, a2: v18, a3: v49, a4: v20, a5: (unsigned int)v20);
  v51 = v52 + 1;
  MEMORY[0x18501CF00](a1: v21, a2: v22, a3: v52, a4: v52 + 1, a5: v47);
  v23 = v53;
  v24 = v47;
  *(_WORD *)(v47 + (int)(2 * v52) + 12) = v53;
  MEMORY[0x185022000](a1: ++v54, a2: v58, a3: v24, a4: v23, a5: v51, a6: v50);
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v25, a2: v26, a3: v51, a4: v53);
  return v47;
}
