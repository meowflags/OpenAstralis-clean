// sub_181E9AEE0
// rva 0x01e9aee0  size 1784  section .text  group text
// window base 0x181e9aee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9AEE0(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r8
  double v20; // xmm0_8
  __int64 result; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  char v47; // [rsp+0h] [rbp-28h] BYREF
  __int64 v48; // [rsp+10h] [rbp-18h]
  unsigned __int64 v49; // [rsp+18h] [rbp-10h]
  unsigned int v50; // [rsp+20h] [rbp-8h]
  unsigned int v51; // [rsp+24h] [rbp-4h]

  v51 = a1;
  if ( (unsigned __int64)&v47 <= *(_QWORD *)(v7 + 8) )
  {
    v49 = a6;
    v20 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v47);
    goto LABEL_116;
  }
  v50 = a2;
  v8 = 8LL * *(unsigned int *)(v6 + 58177804);
  if ( v8 != 0 )
    v8 += v6;
  if ( v8 > a6 )
    goto LABEL_5;
  v22 = *(unsigned int *)(v6 + 58177808);
  if ( (_DWORD)v22 == 0 )
    goto LABEL_5;
  v23 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v22) >> 3) + 32);
  if ( (v23 & 0x80000000) != 0LL )
    v23 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v22 + 8) << v23) + (((int)v23 >> 8) & 0xFFF) + 7)
        & 0xFFFFFFFFFFFFFFF8LL;
  v24 = 8 * v22;
  if ( v24 != 0 )
    v24 += v6;
  v8 = v24 + v23;
  if ( v8 > a6 )
  {
    v49 = a6;
    MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 352678128);
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 1;
  }
  else
  {
LABEL_5:
    v9 = 8LL * *(unsigned int *)(v6 + 58177796);
    if ( v9 != 0 )
      v9 += v6;
    if ( v9 > a6 )
    {
      v49 = a6;
    }
    else
    {
      v10 = *(unsigned int *)(v6 + 58177800);
      if ( (_DWORD)v10 != 0 )
      {
        v11 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v10) >> 3) + 32);
        v49 = a6;
        if ( (v11 & 0x80000000) != 0LL )
          v11 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v10 + 8) << v11) + (((int)v11 >> 8) & 0xFFF) + 7)
              & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 8 * v10;
        if ( v12 != 0 )
          v12 += v6;
        v8 = v12 + v11;
        if ( v8 > v49 )
        {
          MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 352678032);
          if ( *(int *)(v7 + 16) <= 0 )
            MEMORY[0x18277F280]();
          return 1;
        }
      }
      else
      {
        v49 = a6;
      }
    }
    v13 = 8LL * *(unsigned int *)(v6 + 58177820);
    if ( v13 != 0 )
      v13 += v6;
    if ( v13 > v49 )
      goto LABEL_17;
    v25 = *(unsigned int *)(v6 + 58177824);
    if ( (_DWORD)v25 == 0 )
      goto LABEL_17;
    v26 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v25) >> 3) + 32);
    if ( (v26 & 0x80000000) != 0LL )
      v26 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v25 + 8) << v26) + (((int)v26 >> 8) & 0xFFF) + 7)
          & 0xFFFFFFFFFFFFFFF8LL;
    v27 = 8 * v25;
    if ( v27 != 0 )
      v27 += v6;
    v8 = v27 + v26;
    if ( v8 > v49 )
    {
      MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 352677936);
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 1;
    }
    else
    {
LABEL_17:
      v14 = 8LL * *(unsigned int *)(v6 + 58177812);
      if ( v14 != 0 )
        v14 += v6;
      if ( v14 > v49 )
        goto LABEL_20;
      v28 = *(unsigned int *)(v6 + 58177816);
      if ( (_DWORD)v28 == 0 )
        goto LABEL_20;
      v29 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v28) >> 3) + 32);
      if ( (v29 & 0x80000000) != 0LL )
        v29 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v28 + 8) << v29) + (((int)v29 >> 8) & 0xFFF) + 7)
            & 0xFFFFFFFFFFFFFFF8LL;
      v30 = 8 * v28;
      if ( v30 != 0 )
        v30 += v6;
      v8 = v30 + v29;
      if ( v8 > v49 )
      {
        MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 352677848);
        if ( *(int *)(v7 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return 1;
      }
      else
      {
LABEL_20:
        v15 = 8LL * *(unsigned int *)(v6 + 58177828);
        if ( v15 != 0 )
          v15 += v6;
        if ( v15 > v49 )
          goto LABEL_23;
        v31 = *(unsigned int *)(v6 + 58177832);
        if ( (_DWORD)v31 == 0 )
          goto LABEL_23;
        v32 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v31) >> 3) + 32);
        if ( (v32 & 0x80000000) != 0LL )
          v32 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v31 + 8) << v32) + (((int)v32 >> 8) & 0xFFF) + 7)
              & 0xFFFFFFFFFFFFFFF8LL;
        v33 = 8 * v31;
        if ( v33 != 0 )
          v33 += v6;
        v8 = v33 + v32;
        if ( v8 > v49 )
        {
          MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 352677656);
          if ( *(int *)(v7 + 16) <= 0 )
            MEMORY[0x18277F280]();
          return 1;
        }
        else
        {
LABEL_23:
          v16 = 8LL * *(unsigned int *)(v6 + 58177836);
          if ( v16 != 0 )
            v16 += v6;
          if ( v16 > v49 )
            goto LABEL_26;
          v34 = *(unsigned int *)(v6 + 58177840);
          if ( (_DWORD)v34 == 0 )
            goto LABEL_26;
          v35 = *(unsigned int *)(v6 + 8LL * (*(_DWORD *)(v6 + 8 * v34) >> 3) + 32);
          if ( (v35 & 0x80000000) != 0LL )
            v35 = (((unsigned __int64)*(unsigned int *)(v6 + 8 * v34 + 8) << v35) + (((int)v35 >> 8) & 0xFFF) + 7)
                & 0xFFFFFFFFFFFFFFF8LL;
          v36 = 8 * v34;
          if ( v36 != 0 )
            v36 += v6;
          v8 = v36 + v35;
          if ( v8 > v49 )
          {
            v48 = v6 + 376612120;
            MEMORY[0x182084840](a1, a2, a3: v6 + 376612120, a4: v8, a5: v6 + 352677752);
            if ( *(int *)(v7 + 16) <= 0 )
              MEMORY[0x18277F280]();
            return 1;
          }
          else
          {
LABEL_26:
            v48 = v6 + 376612120;
            if ( (unsigned int)sub_181EA3FA0(a1, a2, a3: v6 + 376612120, a4: v8, a5: v49, a6: v7) != 0 )
            {
              if ( *(int *)(v7 + 16) <= 0 )
                MEMORY[0x18277F280]();
              return 1;
            }
            v37 = v51;
            if ( v51 == 0 )
            {
LABEL_67:
              v38 = v50;
              if ( v50 != 0 )
                goto LABEL_68;
              if ( v7 != *(_QWORD *)(v6 + 376351704) )
              {
LABEL_93:
                if ( v51 != 0 )
                {
                  result = sub_181E98860(a1: v51, a2: v38, a3: v6 + 376656584, a4: v17, a5: v48, a6: v49);
                  if ( *(int *)(v7 + 16) <= 0 )
                    return MEMORY[0x18277F280]();
                }
                else
                {
                  if ( *(int *)(v7 + 16) <= 0 )
                    MEMORY[0x18277F280]();
                  return 0;
                }
                return result;
              }
              v45 = *(unsigned int *)(v6 + 376351692);
              if ( (_DWORD)v45 != 0 )
              {
                v46 = *(unsigned int *)(v6 + 8 * v45 + 4);
                if ( (_DWORD)v46 != 0 )
                {
                  if ( *(_DWORD *)(v6 + 8 * v46 + 8) == 47076659 )
                  {
LABEL_68:
                    if ( (unsigned int)sub_181EA0540(a1: v37, a2: v50, a3: v6 + 376654552, a4: v17, a5: v48, a6: v49) != 0 )
                    {
                      if ( *(int *)(v7 + 16) <= 0 )
                        MEMORY[0x18277F280]();
                      return 1;
                    }
                    if ( (unsigned int)sub_181EA3EA0(a1: v40, a2: v41, a3: v48, a4: v39, a5: v49) != 0 )
                    {
                      if ( *(int *)(v7 + 16) <= 0 )
                        MEMORY[0x18277F280]();
                      return 1;
                    }
                    goto LABEL_93;
                  }
                  goto LABEL_93;
                }
LABEL_117:
                MEMORY[0x18276EFE0](a1: v51, a2: v38, a3: v46, a4: v17, a5: v19, a6: v49);
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                return sub_181E9B5E0();
              }
LABEL_116:
              MEMORY[0x18276EFE0](a1: v20);
              goto LABEL_117;
            }
            if ( (unsigned int)sub_181EA6C80(a1: v51, a2: v18, a3: v6 + 376652784, a4: v17, a5: v48, a6: v49) != 0 )
            {
              if ( *(int *)(v7 + 16) <= 0 )
                MEMORY[0x18277F280]();
              return 1;
            }
            else
            {
              if ( (unsigned int)sub_181EA0540(a1: v43, a2: v44, a3: v6 + 376653896, a4: v42, a5: v48, a6: v49) == 0 )
                goto LABEL_67;
              if ( *(int *)(v7 + 16) <= 0 )
                MEMORY[0x18277F280]();
              return 1;
            }
          }
        }
      }
    }
  }
}
