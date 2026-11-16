// sub_181EADFA0
// rva 0x01eadfa0  size 906  section .text  group text
// window base 0x181eadfa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_181EADFA0(__int64 a1, __int64 a2, char *a3, __int64 a4, _BYTE *a5, char *a6)
{
  __int64 v6; // r13
  char *v7; // r14
  char *v8; // rsi
  char *result; // rax
  char *v10; // rbx
  char *v11; // rbp
  __int64 v12; // rcx
  int v13; // r10d
  char *v14; // r12
  unsigned int v15; // ecx
  unsigned int v16; // edx
  char *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  char *v32; // rbx
  char *v33; // [rsp+10h] [rbp-D8h]
  char *v34; // [rsp+10h] [rbp-D8h]
  char *v35; // [rsp+18h] [rbp-D0h]
  char *v36; // [rsp+20h] [rbp-C8h]
  char *v37; // [rsp+28h] [rbp-C0h]
  _BYTE v38[100]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+94h] [rbp-54h]
  char *v40; // [rsp+98h] [rbp-50h]
  unsigned int v41; // [rsp+A4h] [rbp-44h]
  char *v42; // [rsp+A8h] [rbp-40h]
  char *v43; // [rsp+B0h] [rbp-38h]
  __int64 v44; // [rsp+B8h] [rbp-30h]
  char *v45; // [rsp+C0h] [rbp-28h]
  int v46; // [rsp+CCh] [rbp-1Ch]
  char *v47; // [rsp+D0h] [rbp-18h]
  unsigned int v48; // [rsp+DCh] [rbp-Ch]
  _BYTE *v49; // [rsp+E0h] [rbp-8h]

  if ( a3 == v7 )
    JUMPOUT(0x303D37FB1LL);
  v8 = &v7[8 * *((unsigned int *)v7 + 14544461)];
  if ( v8 == v7 )
    JUMPOUT(0x303D37FC6LL);
  result = &v7[8 * *((unsigned int *)v7 + 14544461)];
  v10 = &v7[8 * *((unsigned int *)v7 + 14544462)];
  if ( v8 > a3 )
    goto LABEL_4;
  if ( v10 == v7 )
    JUMPOUT(0x303D37FEELL);
  result = &v7[8 * *((unsigned int *)v7 + 14544462)];
  if ( a3 > v10 )
  {
LABEL_4:
    if ( *a5 == 0 )
    {
      if ( (_DWORD)a1 != 0 )
        *a5 = 1;
      v37 = a3;
      v49 = a5;
      v36 = a6;
      v48 = a1;
      v35 = v8;
      v33 = v10;
      if ( a3 == v7 )
        JUMPOUT(0x303D3802ALL);
      v11 = a3;
      v12 = *((int *)v7 + 10115604);
      v13 = *(_DWORD *)&v7[4 * v12];
      if ( v13 != 0 )
      {
        v47 = a3;
        v46 = v13;
        v45 = &v7[4 * v12];
        result = v45 + 4;
        v44 = 8LL * v13;
        v14 = &v45[v44 + 4];
        v43 = v14;
        while ( 1 )
        {
          if ( v14 <= result )
          {
            v8 = v35;
            a3 = v37;
            goto LABEL_18;
          }
          v15 = *(_DWORD *)result;
          v16 = *((_DWORD *)result + 1);
          v42 = result + 8;
          v17 = &v11[v15];
          if ( a6 == v7 )
            break;
          v41 = v15;
          v18 = *(_DWORD *)a6 >> 3;
          v19 = *(_QWORD *)&v7[8 * v18
                             + 16
                             + HIWORD(*(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v18 + 20]
                                                   + 12
                                                   + 4
                                                   * (*(_DWORD *)&v7[8 * v18 + 44]
                                                    & (0x215u >> HIBYTE(*(_DWORD *)&v7[8 * v18 + 44])))])];
          v40 = v17;
          v39 = v16;
          ((void (__fastcall *)(__int64, char *, char *, _QWORD, char *, __int64))(v6 + v19))(
            a1: 4,
            a2: v37,
            a3: a6,
            a4: v16,
            a5: v17,
            a6: 1);
          result = v42;
          v14 = v43;
          v11 = v47;
          a6 = v36;
        }
LABEL_34:
        MEMORY[0x18276EFE0](a1: v48, a2: v15, a3: v37, a4: v42, a5: v49);
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
        return (char *)sub_181EAE340();
      }
      else
      {
LABEL_18:
        if ( a3 == v7 )
          JUMPOUT(0x303D3817ALL);
        v20 = v8 - v7;
        if ( v20 != 0 )
          v20 += (unsigned __int64)v7;
        if ( v20 > (unsigned __int64)a3 )
          goto LABEL_22;
        v32 = (char *)(v10 - v7);
        if ( v33 != v7 )
          v32 = v33;
        if ( a3 > v32 )
        {
LABEL_22:
          v44 = (__int64)v38;
          MEMORY[0x182772FE0](a1, a2: v20, a3: v38, a4: a3, a5: a3);
          v23 = (_QWORD *)v44;
          v45 = (char *)(v44 + 40);
          while ( 1 )
          {
            result = (char *)MEMORY[0x182772760](a1: v21, a2: v22, a3: v23, a4: v37, a5: 0, a6: v37);
            if ( (_DWORD)result == 0 )
              break;
            if ( (*(_QWORD *)(v44 + 40) & 2) != 0 )
            {
              MEMORY[0x1828C1C40](a1: v30, a2: v31, a3: v7 + 370861008);
LABEL_33:
              MEMORY[0x1828C1C40](a1: v30, a2: v31, a3: v7 + 367049616);
              goto LABEL_34;
            }
            v24 = *(_QWORD *)(v44 + 80);
            if ( v24 == 0 )
              goto LABEL_33;
            v47 = *(char **)(v24 + 176);
            v43 = (char *)v24;
            v34 = &v7[8 * *(unsigned int *)MEMORY[0x1815A85E0](a1: v30, a2: v31, a3: v47, a4: v24, a5: 0)];
            sub_181EBE8C0(a1: v37, a2: v26, a3: v45, a4: v25, a5: v43, a6: v36);
            MEMORY[0x1815AE5C0](a1: v28, a2: v29, a3: v43, a4: v27, a5: v34);
            v23 = (_QWORD *)v44;
          }
        }
      }
    }
  }
  return result;
}
