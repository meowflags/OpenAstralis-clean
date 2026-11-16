// sub_181EBE8C0
// rva 0x01ebe8c0  size 1500  section .text  group text
// window base 0x181ebe8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181EBE8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int8 v14; // si
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  char v17; // al
  int i; // esi
  unsigned __int8 v19; // di
  unsigned __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int8 v22; // cl
  __int64 v23; // r10
  unsigned __int64 v24; // rbp
  int j; // edi
  unsigned __int8 v26; // r11
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdx
  BOOL v35; // r12d
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  unsigned __int8 v41; // r9
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  char v44; // di
  int k; // r9d
  unsigned __int8 v46; // r12
  __int64 v47; // r9
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rdx
  _DWORD *v51; // [rsp+10h] [rbp-98h]
  _DWORD *v52; // [rsp+18h] [rbp-90h]
  _DWORD *v54; // [rsp+28h] [rbp-80h]
  __int64 v55; // [rsp+40h] [rbp-68h]
  unsigned int v56; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v57; // [rsp+54h] [rbp-54h]
  __int64 v58; // [rsp+60h] [rbp-48h]
  __int64 v59; // [rsp+68h] [rbp-40h]
  __int64 v60; // [rsp+78h] [rbp-30h]
  __int64 v61; // [rsp+90h] [rbp-18h]

  v8 = *(_QWORD *)(a5 + 200);
  if ( *(_QWORD *)(a3 + 24) != -1 )
  {
    v54 = a6;
    v61 = *(_QWORD *)(a5 + 200);
    v9 = *(_QWORD *)(a3 + 24);
    v10 = 1;
    v11 = *(_QWORD *)(a3 + 48);
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(v8 + (int)v9 + 12);
      v13 = v9 + 1;
      if ( *(_BYTE *)(v8 + (int)v9 + 12) >= 0xC0u )
      {
        v14 = *(_BYTE *)(v8 + (int)v13 + 12);
        v15 = v12 + ((unsigned __int64)v14 << 6);
        if ( v14 < 0xC0u )
        {
          v12 += (unsigned __int64)v14 << 6;
          v13 = v9 + 2;
        }
        else
        {
          v16 = v9 + 2;
          v17 = 12;
          for ( i = 3; ; ++i )
          {
            v19 = *(_BYTE *)(v8 + (int)v16 + 12);
            v15 += (unsigned __int64)v19 << v17;
            ++v16;
            if ( v19 < 0xC0u )
            {
              v12 = v15;
              v13 = v16;
              goto LABEL_10;
            }
            if ( i == 11 )
              break;
            v17 += 6;
          }
          v12 = v15;
          v13 = v16;
        }
      }
LABEL_10:
      v20 = *(unsigned __int8 *)(v8 + (int)v13 + 12);
      v21 = v13 + 1;
      if ( *(_BYTE *)(v8 + (int)v13 + 12) < 0xC0u )
      {
        v60 = v13 + 1;
      }
      else
      {
        v22 = *(_BYTE *)(v8 + (int)v21 + 12);
        v21 = v20 + ((unsigned __int64)v22 << 6);
        if ( v22 < 0xC0u )
        {
          v60 = v13 + 2;
          v20 += (unsigned __int64)v22 << 6;
        }
        else
        {
          v23 = v13 + 2;
          v24 = v20 + ((unsigned __int64)v22 << 6);
          v21 = 12;
          for ( j = 3; ; ++j )
          {
            v26 = *(_BYTE *)(v8 + (int)v23 + 12);
            v24 += (unsigned __int64)v26 << v21;
            ++v23;
            if ( v26 < 0xC0u )
            {
              v20 = v24;
              v60 = v23;
              goto LABEL_18;
            }
            if ( j == 11 )
              break;
            v21 += 6;
          }
          v20 = v24;
          v60 = v23;
        }
      }
LABEL_18:
      v27 = v20 >> 1;
      v28 = -(__int64)(v20 & 1);
      v29 = v12 >> 1;
      v30 = -(__int64)(v12 & 1);
      if ( v30 == v29 && v28 == v27 )
        break;
      v31 = v30 ^ v29;
      if ( v10 != 0 )
      {
        v32 = 0;
      }
      else if ( v31 < 0 )
      {
        v31 = -(v31 + 1);
        v32 = 1;
      }
      else
      {
        v32 = 0;
      }
      v33 = v28 ^ v27;
      if ( v33 < 0 )
      {
        v28 = -v33;
        v59 = -v33;
      }
      else
      {
        v59 = v33;
      }
      v34 = v31 + v11;
      v58 = v34;
      if ( v33 >= 0 )
        JUMPOUT(0x303D48AC8LL);
      v35 = v33 < 0;
      v57 = v35;
      if ( v32 != 0 )
      {
        if ( a6 == v7 )
          goto LABEL_60;
        v36 = *a6 >> 3;
        v52 = &v7[2 * v7[2 * v36 + 5]];
        v56 = v7[2 * v36 + 11] & (0x215u >> HIBYTE(v7[2 * v36 + 11]));
        v51 = &v7[2 * v36];
        v37 = *(_QWORD *)((char *)v51 + HIWORD(v52[v56 + 3]) + 8);
        ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, BOOL))(v6 + v37))(
          a1: 4,
          a2: a1,
          a3: a6,
          a4: v37,
          a5: v34,
          a6: v35);
        v38 = 0;
        v39 = v60;
        while ( v59 > v38 )
        {
          v40 = *(unsigned __int8 *)(v61 + (int)v39 + 12);
          if ( *(_BYTE *)(v61 + (int)v39 + 12) < 0xC0u )
          {
            v55 = v39 + 1;
          }
          else
          {
            v41 = *(_BYTE *)(v61 + (int)v39 + 1 + 12);
            v42 = v40 + ((unsigned __int64)v41 << 6);
            if ( v41 < 0xC0u )
            {
              v55 = v39 + 2;
              v40 += (unsigned __int64)v41 << 6;
            }
            else
            {
              v43 = v39 + 2;
              v44 = 12;
              for ( k = 3; ; ++k )
              {
                v46 = *(_BYTE *)(v61 + (int)v43 + 12);
                v42 += (unsigned __int64)v46 << v44;
                ++v43;
                if ( v46 < 0xC0u )
                {
                  v40 = v42;
                  v55 = v43;
                  goto LABEL_35;
                }
                if ( k == 11 )
                  break;
                v44 += 6;
              }
              v40 = v42;
              v55 = v43;
            }
          }
LABEL_35:
          v47 = -(__int64)(v40 & 1) ^ (v40 >> 1);
          if ( v47 < 0 )
            v48 = v58 - -4 * v47;
          else
            v48 = v58 + 4 * v47;
          v49 = *(_QWORD *)((char *)v51 + HIWORD(v52[v56 + 3]));
          ((void (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64))(v6 + v49))(
            a1: v57,
            a2: a1,
            a3: v54,
            a4: v49,
            a5: v58,
            a6: v48);
          ++v38;
          v39 = v55;
        }
        v11 = v58 + 4;
        v10 = 0;
        v9 = v39;
        v8 = v61;
        a6 = v54;
      }
      else
      {
        if ( a6 == v7 )
        {
          MEMORY[0x18276EFE0](a1, a2: v60, a3: v34, a4: v59, a5: a3);
LABEL_60:
          MEMORY[0x18276EFE0](a1: v28, a2: v21);
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          sub_181EBEEA0();
          return;
        }
        v50 = *a6 >> 3;
        ((void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, bool))(v6
                                                                                + *(_QWORD *)((char *)&v7[2 * v50 + 4]
                                                                                            + HIWORD(v7[2 * v7[2 * v50 + 5] + 3 + (v7[2 * v50 + 11] & (0x215u >> HIBYTE(v7[2 * v50 + 11])))]))))(
          a1: 4,
          a2: a1,
          a3: a6,
          a4: (unsigned int)v59,
          a5: v58,
          a6: v33 < 0);
        v11 = 4 * v59 + v58;
        v10 = 0;
        v9 = v60;
        v8 = v61;
        a6 = v54;
      }
    }
  }
}
