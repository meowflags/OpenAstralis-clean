// sub_181EA9040
// rva 0x01ea9040  size 3225  section .text  group text
// window base 0x181ea9040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EA9040(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  _DWORD *v8; // rbp
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r12
  unsigned __int64 i; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r10
  int v20; // r9d
  __int64 v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // rdx
  unsigned int *v24; // rax
  unsigned __int64 v25; // rbx
  _DWORD *v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  int v31; // ecx
  unsigned int v32; // esi
  int j; // ecx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // [rsp+8h] [rbp-180h]
  __int64 v43; // [rsp+10h] [rbp-178h]
  unsigned int v44; // [rsp+24h] [rbp-164h]
  __int64 v45; // [rsp+30h] [rbp-158h]
  unsigned __int64 v46; // [rsp+38h] [rbp-150h]
  unsigned __int64 v47; // [rsp+40h] [rbp-148h]
  int *v49; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v50; // [rsp+E0h] [rbp-A8h]
  unsigned int *v51; // [rsp+E0h] [rbp-A8h]
  unsigned int *v52; // [rsp+E8h] [rbp-A0h]
  __int64 v53; // [rsp+F0h] [rbp-98h]
  __int64 v54; // [rsp+F0h] [rbp-98h]
  unsigned int v55; // [rsp+104h] [rbp-84h]
  unsigned __int64 v56; // [rsp+158h] [rbp-30h]
  _DWORD *v57; // [rsp+168h] [rbp-20h]
  __int64 v58; // [rsp+178h] [rbp-10h]

  v47 = v7 + 8LL * *(unsigned int *)(v7 + 58177844);
  v46 = v7 + 8LL * *(unsigned int *)(v7 + 58177848);
  v45 = v7 + 376654488;
  v8 = (_DWORD *)(a3 + 2112);
  v58 = a3 + 2112;
  while ( 1 )
  {
    if ( *((_WORD *)v8 - 1) != 0 )
      v57 = &v8[2 * *((unsigned __int16 *)v8 - 1)];
    else
      v57 = nullptr;
    v56 = 8LL * (unsigned int)*(v8 - 2) + v7;
    result = v56 & 0xFFFFFFFFFFF80000LL;
    v10 = a5;
    if ( &v8[2 * *((unsigned __int16 *)v8 - 2)] != v8 )
    {
      *v8 &= ~4u;
      v11 = *v8 >> 3;
      v12 = *(unsigned int *)(v7 + 8 * v11 + 32);
      if ( (v12 & 0x80000000) != 0LL )
        v13 = (((unsigned __int64)(unsigned int)v8[2] << *(_DWORD *)(v7 + 8 * v11 + 32)) + (((int)v12 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
      else
        v13 = (unsigned int)v12;
      i = v56;
      v15 = v56 - ((v56 & 0xFFFFFFFFFFF80000LL) + 2112);
      v16 = v15 >> 9;
      v17 = (v15 + v13 - 1) >> 9;
      if ( v17 != v15 >> 9 || (((_WORD)v56 - 2112) & 0x1FF) == 0 )
      {
        if ( (((_WORD)v56 - 2112) & 0x1FF) != 0 )
        {
          v18 = v16 + 1;
          *(_BYTE *)(result + v16 + 1081) = -(__int64)((((v16 + 1) << 9) - v15) >> 3);
        }
        else
        {
          *(_BYTE *)(result + v16 + 1080) = 0;
          v18 = v15 >> 9;
        }
        if ( v18 + 63 < v17 )
          JUMPOUT(0x303D331FFLL);
        v16 = (v15 + v13 - 1) >> 9;
        v19 = v18 + 1;
        if ( v18 + 1 <= v17 )
        {
          *(_BYTE *)(result + v18 + 1081) = 1;
          v19 = v18 + 2;
          v20 = 2;
          while ( v19 <= v17 )
            *(_BYTE *)(result + v19++ + 1080) = v20++;
        }
        v12 = 6;
LABEL_15:
        while ( v19 <= v17 )
        {
          v16 = (unsigned int)(v12 + 1);
          for ( i = 0; ; i = (unsigned int)(i + 1) )
          {
            if ( 1 << v12 <= (int)i )
            {
              v12 = (unsigned int)v16;
              goto LABEL_15;
            }
            *(_BYTE *)(result + v19++ + 1080) = v12 + 58;
            if ( v19 > v17 )
              break;
          }
          v12 = (unsigned int)v16;
        }
      }
      if ( a5 != v7 )
      {
        v44 = v11;
        v21 = (unsigned int)*(char *)(v7 + 8 * v11 + 68);
        v55 = v21;
        if ( (_DWORD)v21 != 1 )
        {
LABEL_24:
          if ( (int)v21 < 4 )
          {
            v17 = *(int *)(v7 + 8 * v11 + 56);
            i = *(unsigned int *)(v7 + 4 * v17);
            if ( (_DWORD)i != 0 )
            {
              v54 = v7 + 4 * v17;
              v16 = v54 + 4;
              v12 = 8LL * (int)i + v54 + 4;
              v50 = v12;
              if ( v12 > v54 + 4 )
              {
                v49 = (int *)(v54 + 12);
                sub_181EA9F00(
                  a1: 4,
                  a2: v8,
                  a3: v45,
                  a4: *(unsigned int *)(v7 + 4 * v17 + 8),
                  a5: (char *)v8 + *(int *)(v7 + 4 * v17 + 4),
                  a6: 1);
                while ( 1 )
                {
                  v12 = v50;
                  if ( v50 <= (unsigned __int64)v49 )
                    break;
                  v22 = v49[1];
                  v23 = *v49;
                  v49 += 2;
                  sub_181EA9F00(a1: 4, a2: v8, a3: v45, a4: v22, a5: (char *)v8 + v23, a6: 1);
                }
                v21 = v55;
              }
            }
          }
          if ( (unsigned int)v21 <= 6 )
            __asm { jmp     rdx; switch jump }
LABEL_88:
          MEMORY[0x1828C1C40](a1: v11, a2: v16, a3: v7 + 368272040, a4: i, a5: v17, a6: v12);
          MEMORY[0x18276EAE0]();
          MEMORY[0x1828C1C40](a1: v38, a2: v39, a3: v7 + 370861008);
          MEMORY[0x1828C1C40](a1: v40, a2: v41, a3: v7 + 367049616);
          __halt();
        }
        if ( *(__int16 *)(v7 + 8 * v11 + 62) >= 2
          && *(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v11 + 16) + 16) == 5732 )
        {
          v24 = v8 + 1;
          i = (unsigned __int64)(v8 + 2);
          v25 = v46;
          v12 = v47;
          while ( i > (unsigned __int64)v24 )
          {
            v26 = (_DWORD *)(8LL * *v24);
            if ( v26 != nullptr )
              v26 = (_DWORD *)((char *)v26 + v7);
            v17 = (unsigned __int64)(v24 + 1);
            if ( v26 != nullptr )
            {
              if ( v12 == v7 )
                JUMPOUT(0x303D3395FLL);
              if ( v12 > (unsigned __int64)v26 )
                goto LABEL_48;
              if ( v25 == v7 )
                JUMPOUT(0x303D3399ALL);
              if ( (unsigned __int64)v26 > v25 )
              {
LABEL_48:
                if ( (unsigned __int64)v26 >= *(_QWORD *)(v7 + 376612552)
                  && (unsigned __int64)v26 < *(_QWORD *)(v7 + 376612568) )
                {
                  ++v24;
                }
                else if ( (*v26 & 1) != 0 )
                {
                  ++v24;
                }
                else
                {
                  v52 = v24 + 1;
                  v51 = v24;
                  if ( sub_181EA8F40(a1: v11, a2: v16, a3: (unsigned __int64)v26) != 0 )
                    JUMPOUT(0x303D339D5LL);
                  *v51 = 0;
                  v24 = v52;
                  i = (unsigned __int64)(v8 + 2);
                  v25 = v46;
                  v12 = v47;
                }
              }
              else
              {
                ++v24;
              }
            }
            else
            {
              ++v24;
            }
          }
          v11 = v44;
          v21 = 1;
          goto LABEL_24;
        }
        v42 = MEMORY[0x18276EAE0](a1: v11, a2: v16, a3, a4: v8, a5: v17, a6: v12);
        MEMORY[0x1815AE5C0](a1: v34, a2: v35, a3: v53, a4: v8);
        MEMORY[0x182769900](a1: v36, a2: v37, a3: v42, a4: v43, a5: &a7);
      }
      MEMORY[0x18276EFE0](a1: v11, a2: v16, a3: v10, a4: i, a5: v17, a6: v12);
      goto LABEL_88;
    }
    if ( v57 != nullptr && *(_BYTE *)(a3 + 48) != 0 )
    {
      result = (unsigned __int64)v8 - v58;
      v27 = ((unsigned __int64)v8 - v58) >> 9;
      v28 = ((unsigned __int64)v57 - v58 - 1) >> 9;
      if ( v28 != v27 || (result & 0x1FF) == 0 )
      {
        if ( (result & 0x1FF) != 0 )
        {
          v29 = v27 + 1;
          *(_BYTE *)(a3 + v27 + 1081) = -(__int64)((((v27 + 1) << 9) - result) >> 3);
        }
        else
        {
          *(_BYTE *)(a3 + v27 + 1080) = 0;
          v29 = v27;
        }
        if ( v29 + 63 < v28 )
          JUMPOUT(0x303D33B1FLL);
        v30 = v29 + 1;
        if ( v29 + 1 <= v28 )
        {
          *(_BYTE *)(a3 + v29 + 1081) = 1;
          v30 = v29 + 2;
          v31 = 2;
          while ( v30 <= v28 )
            *(_BYTE *)(a3 + v30++ + 1080) = v31++;
        }
        result = 6;
LABEL_75:
        while ( v30 <= v28 )
        {
          v32 = result + 1;
          for ( j = 0; ; ++j )
          {
            if ( 1 << result <= j )
            {
              result = v32;
              goto LABEL_75;
            }
            *(_BYTE *)(a3 + v30++ + 1080) = result + 58;
            if ( v30 > v28 )
              break;
          }
          result = v32;
        }
      }
    }
    if ( v57 == nullptr )
      return result;
    v8 = v57;
  }
}
