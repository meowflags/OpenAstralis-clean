// sub_1ED8980
// rva 0x01ed8980  size 1108  section .text  group text
// window base 0x181ed8980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED8980(unsigned int a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // [rsp+10h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  unsigned int v42; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v43; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v44; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v45; // [rsp+1Ch] [rbp-3Ch]
  __int64 v46; // [rsp+20h] [rbp-38h]
  int v48; // [rsp+34h] [rbp-24h]
  void (__fastcall *v49)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64); // [rsp+38h] [rbp-20h]
  __int64 v50; // [rsp+40h] [rbp-18h]
  __int64 v51; // [rsp+48h] [rbp-10h]
  unsigned int v52; // [rsp+50h] [rbp-8h]

  v52 = a2;
  v8 = (unsigned int)a3[1];
  if ( (_DWORD)v8 == 0 )
  {
    v51 = a6;
    v50 = a5;
    sub_276EFE0();
LABEL_61:
    sub_276EFE0();
LABEL_62:
    sub_276EFE0();
LABEL_63:
    sub_276EFE0();
LABEL_64:
    sub_276EFE0();
    goto LABEL_65;
  }
  v50 = a5;
  v51 = a6;
  v46 = v7 + 8 * v8;
  sub_15AF260(
    a1: 1,
    a2,
    a3: v46,
    a4: *(_QWORD *)(a6 + 80),
    a5: a6,
    a6: a5 - *(_QWORD *)(a6 + 80) + *(_QWORD *)(a6 + 192));
  v11 = (unsigned int)a3[1];
  if ( (_DWORD)v11 == 0 )
    goto LABEL_61;
  v46 = v7 + 8 * v11;
  v42 = a3[1];
  sub_15AE9E0(a1: v9, a2: v10, a3: v46);
  if ( *(_DWORD *)(v7 + 8LL * v42 + 20) == 0 )
  {
    LODWORD(v21) = a1;
    return (unsigned int)v21;
  }
  v14 = (unsigned int)a3[1];
  if ( (_DWORD)v14 == 0 )
    goto LABEL_63;
  v15 = *(unsigned int *)(v7 + 8 * v14 + 20);
  v43 = v15;
  v46 = v7 + 8 * v15;
  v16 = sub_1EF0C80(a1: v12, a2: v13, a3: v46);
  v18 = (unsigned __int64)a3;
  v49 = (void (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64))(v6
                                                                                  + *(_QWORD *)(v7
                                                                                              + 8LL * (*a3 >> 3)
                                                                                              + 112));
  if ( v16 == 0 )
  {
    v21 = a1;
    goto LABEL_12;
  }
  v19 = a1;
  if ( a1 == 0 )
  {
    v20 = v43;
    if ( v43 != 0 )
    {
      if ( *(_DWORD *)(v7 + 8LL * v43 + 52) != 0 && *(_DWORD *)(v7 + 8LL * v43 + 4) == 0 )
      {
        sub_15AF580(a1, a2: v17, a3: v46);
        v20 = v43;
      }
      v18 = *(unsigned int *)(v7 + 8 * v20 + 4);
      if ( (_DWORD)v18 != 0 )
      {
        if ( *(__int16 *)(v7 + 8 * v18 + 62) < 2 )
          goto LABEL_8;
        v18 = *(unsigned int *)(v7 + 8 * v18 + 16);
        if ( *(_DWORD *)(v7 + 8 * v18 + 16) != 27283 )
          goto LABEL_8;
        v21 = 0;
LABEL_12:
        v48 = v21;
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              v23 = (unsigned int)a3[1];
              if ( (_DWORD)v23 == 0 )
                goto LABEL_62;
              v46 = v7 + 8 * v23;
              v44 = a3[1];
              sub_15AE9E0(a1: v21, a2: v17, a3: v46);
              if ( *(_DWORD *)(v7 + 8LL * v44 + 20) == 0 )
              {
                LODWORD(v21) = v48;
                return (unsigned int)v21;
              }
              v26 = (unsigned int)a3[1];
              if ( (_DWORD)v26 == 0 )
                goto LABEL_64;
              v27 = *(unsigned int *)(v7 + 8 * v26 + 20);
              v45 = v27;
              v46 = v7 + 8 * v27;
            }
            while ( (unsigned int)sub_1EF0C80(a1: v24, a2: v25, a3: v46) == 0 );
            if ( v48 != 0 )
            {
              v17 = v52;
              v28 = v45;
              goto LABEL_19;
            }
            if ( v45 == 0 )
              goto LABEL_68;
            if ( *(_DWORD *)(v7 + 8LL * v45 + 52) != 0 )
            {
              if ( *(_DWORD *)(v7 + 8LL * v45 + 4) == 0 )
                sub_15AF580(a1: v21, a2: v17, a3: v46);
              v28 = v45;
            }
            else
            {
              v28 = v45;
            }
            v29 = *(unsigned int *)(v7 + 8 * v28 + 4);
            if ( (_DWORD)v29 == 0 )
              goto LABEL_69;
            if ( *(__int16 *)(v7 + 8 * v29 + 62) >= 2 )
              break;
            v17 = v52;
LABEL_19:
            if ( (int)v17 > v48 )
            {
              if ( (_DWORD)v28 == 0 )
                goto LABEL_70;
              if ( *(_DWORD *)(v7 + 8 * v28 + 52) != 0 && *(_DWORD *)(v7 + 8 * v28 + 4) == 0 )
              {
                sub_15AF580(a1: v21, a2: v17, a3: v46);
                v28 = v45;
              }
              v30 = *(unsigned int *)(v7 + 8 * v28 + 4);
              v31 = v7 + 8 * v30;
              if ( *(_DWORD *)(v7 + 8 * v28 + 52) != 0 && (_DWORD)v30 == 0 )
              {
                v40 = v7 + 8 * v30;
                sub_15AF580(a1: v21, a2: v17, a3: v46);
                v31 = v40;
                v28 = v45;
              }
              v49(
                a1: *(unsigned int *)(v7 + 8 * v28 + 12),
                a2: v17,
                a3,
                a4: v31,
                a5: v31,
                a6: v7 + 8LL * *(unsigned int *)(v7 + 8 * v28 + 8));
            }
            if ( v48 == 1023 )
            {
              LODWORD(v21) = 1024;
              return (unsigned int)v21;
            }
            ++v48;
          }
          if ( *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v29 + 16) + 16) != 27283 )
          {
            v17 = v52;
            goto LABEL_19;
          }
        }
      }
LABEL_66:
      sub_276EFE0();
      goto LABEL_67;
    }
LABEL_65:
    sub_276EFE0();
    goto LABEL_66;
  }
  v20 = v43;
LABEL_8:
  v17 = v52;
  if ( (int)v52 <= (int)a1 )
    goto LABEL_9;
  if ( (_DWORD)v20 != 0 )
  {
    if ( *(_DWORD *)(v7 + 8 * v20 + 52) != 0 && *(_DWORD *)(v7 + 8 * v20 + 4) == 0 )
    {
      sub_15AF580(a1: v19, a2: v52, a3: v46);
      v20 = v43;
    }
    v32 = *(unsigned int *)(v7 + 8 * v20 + 4);
    v33 = v7 + 8 * v32;
    if ( *(_DWORD *)(v7 + 8 * v20 + 52) != 0 && (_DWORD)v32 == 0 )
    {
      v41 = v7 + 8 * v32;
      sub_15AF580(a1: v19, a2: v17, a3: v46);
      v33 = v41;
      v20 = v43;
    }
    v49(
      a1: *(unsigned int *)(v7 + 8 * v20 + 12),
      a2: v17,
      a3,
      a4: v33,
      a5: v33,
      a6: v7 + 8LL * *(unsigned int *)(v7 + 8 * v20 + 8));
LABEL_9:
    v21 = a1 + 1;
    if ( a1 == 1023 )
      return (unsigned int)v21;
    goto LABEL_12;
  }
LABEL_67:
  sub_276EFE0(a1: v19, a2: v17, a3: v18, a4: v46);
LABEL_68:
  sub_276EFE0();
LABEL_69:
  sub_276EFE0();
LABEL_70:
  sub_276EFE0(a1, a2: v17, a3, a4: v46, a5: v50, a6: v51);
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
  return sub_1ED8DE0(a1: v36, a2: v37, a3: v34, a4: v35, a5: v38, a6: v39);
}
