// sub_181EA09A0
// rva 0x01ea09a0  size 2153  section .text  group text
// window base 0x181ea09a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA09A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  char *v14; // r9
  char *v15; // rdi
  int v16; // esi
  __int64 v17; // r12
  char *v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  int v23; // edx
  int v24; // edx
  int j; // ecx
  char *v26; // rbx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  int v31; // r10d
  int v32; // ebx
  unsigned __int64 v33; // r10
  int i; // ecx
  unsigned __int64 v35; // rdi
  char *v36; // [rsp+20h] [rbp-28h]
  int v37; // [rsp+2Ch] [rbp-1Ch]
  unsigned __int64 v39; // [rsp+30h] [rbp-18h]
  BOOL v40; // [rsp+3Ch] [rbp-Ch]
  int v41; // [rsp+3Ch] [rbp-Ch]
  int v42; // [rsp+40h] [rbp-8h]
  unsigned int v43; // [rsp+44h] [rbp-4h]

  result = *(unsigned int *)(a5 + 40);
  v7 = *(unsigned int *)(a5 + 44);
  if ( (_DWORD)v7 == 0 )
    return result;
  v43 = *(_DWORD *)(a5 + 44);
  *(_BYTE *)(a5 + 48) = 1;
  if ( (_DWORD)result == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_75;
  }
  v42 = *(_DWORD *)(v5 + 8 * result + 48);
  v40 = v42 < 16;
  sub_181E8E060(a1, a2: v42 < 16, a3: v5 + 376654936, a4: v7, a5);
  v9 = a5;
  v10 = *(unsigned int *)(a5 + 40);
  v11 = *(unsigned __int8 *)(v5 + 376654992);
  if ( (_DWORD)v10 == 0 )
  {
LABEL_75:
    MEMORY[0x18276EFE0](a1: v8, a2: v40, a3: v11, a4: v43);
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
    return sub_181EA1220();
  }
  result = *(unsigned int *)(v5 + 8 * v10 + 48);
  v41 = result;
  if ( (_DWORD)result == 16 && (v42 < 16 || *(_BYTE *)(v5 + 376654992) != 0) )
  {
    *(_QWORD *)(a5 + 56) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 64) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 72) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 80) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 88) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 96) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 104) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 112) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 120) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 128) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 136) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 144) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 152) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 160) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 168) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 176) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 184) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 192) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 200) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 208) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 216) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 224) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 232) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 240) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 248) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 256) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 264) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 272) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 280) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 288) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 296) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 304) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 312) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 320) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 328) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 336) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 344) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 352) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 360) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 368) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 376) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 384) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 392) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 400) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 408) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 416) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 424) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 432) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 440) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 448) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 456) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 464) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 472) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 480) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 488) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 496) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 504) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 512) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 520) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 528) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 536) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 544) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 552) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 560) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 568) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 576) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 584) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 592) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 600) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 608) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 616) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 624) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 632) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 640) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 648) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 656) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 664) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 672) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 680) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 688) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 696) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 704) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 712) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 720) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 728) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 736) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 744) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 752) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 760) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 768) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 776) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 784) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 792) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 800) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 808) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 816) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 824) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 832) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 840) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 848) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 856) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 864) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 872) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 880) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 888) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 896) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 904) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 912) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 920) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 928) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 936) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 944) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 952) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 960) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 968) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 976) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 984) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 992) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1000) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1008) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1016) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1024) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1032) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1040) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1048) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1056) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1064) = 0x101010101010101LL;
    *(_QWORD *)(a5 + 1072) = 0x101010101010101LL;
  }
  v37 = v11;
  v12 = a5 + *(_QWORD *)(a5 + 32);
  v39 = v12;
  v13 = v9 + 2112;
  v14 = (char *)(v9 + 2112);
  v15 = (char *)(v9 + 2112);
  v16 = 0;
  while ( v12 > (unsigned __int64)v15 )
  {
    v17 = *(_DWORD *)v15 & 6;
    if ( v17 == 4 )
    {
      result = *(_DWORD *)v15 & 0xFFFFFFF8;
    }
    else
    {
      result = *(unsigned int *)(v5 + 8LL * (*(_DWORD *)v15 >> 3) + 32);
      if ( (int)result < 0 )
        result = (((unsigned __int64)*((unsigned int *)v15 + 2) << result) + (((int)result >> 8) & 0xFFF) + 7)
               & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v17 == 6 )
    {
      if ( v14 == v15 )
      {
        v36 = &v15[result];
      }
      else
      {
        if ( (unsigned __int64)(v15 - v14) < 0x10 )
        {
          *(_DWORD *)v14 = 34080832;
        }
        else
        {
          *(_QWORD *)v14 = 40462248;
          *((_DWORD *)v14 + 2) = (unsigned __int64)(v15 - v14 - 12) >> 2;
        }
        if ( v41 == 16 )
        {
          v26 = &v14[-v13];
          v27 = (unsigned __int64)&v14[-v13] >> 9;
          v28 = (unsigned __int64)&v15[-v13 - 1] >> 9;
          if ( v28 == v27 && ((unsigned __int16)v26 & 0x1FF) != 0 )
          {
            v36 = &v15[result];
          }
          else
          {
            v36 = &v15[result];
            if ( ((unsigned __int16)v26 & 0x1FF) != 0 )
            {
              v29 = v27 + 1;
              *(_BYTE *)(v9 + v27 + 1081) = -(__int64)((((v27 + 1) << 9) - (unsigned __int64)v26) >> 3);
            }
            else
            {
              *(_BYTE *)(v9 + v27 + 1080) = 0;
              v29 = (unsigned __int64)&v14[-v13] >> 9;
            }
            if ( v29 + 63 < v28 )
              JUMPOUT(0x303D2ACDBLL);
            v30 = v29 + 1;
            v31 = 1;
            while ( v30 <= v28 )
              *(_BYTE *)(v9 + v30++ + 1080) = v31++;
            v32 = 6;
LABEL_52:
            while ( v30 <= v28 )
            {
              v33 = v28;
              for ( i = 0; ; ++i )
              {
                if ( 1 << v32 <= i )
                {
                  ++v32;
                  v28 = v33;
                  goto LABEL_52;
                }
                *(_BYTE *)(v9 + v30++ + 1080) = v32 + 58;
                if ( v30 > v33 )
                  break;
              }
              ++v32;
              v28 = v33;
            }
          }
          *(_DWORD *)v14 |= 2u;
        }
        else
        {
          v36 = &v15[result];
        }
      }
      *(_DWORD *)v15 &= 0xFFFFFFF9;
      if ( v41 == 16 )
      {
        v18 = &v15[-v13];
        v19 = (unsigned __int64)&v15[-v13] >> 9;
        v20 = (unsigned __int64)&v15[result - v13 - 1] >> 9;
        if ( v20 != v19 || ((unsigned __int16)v18 & 0x1FF) == 0 )
        {
          if ( ((unsigned __int16)v18 & 0x1FF) != 0 )
          {
            v21 = v19 + 1;
            *(_BYTE *)(v9 + v19 + 1081) = -(__int64)((((v19 + 1) << 9) - (unsigned __int64)v18) >> 3);
          }
          else
          {
            *(_BYTE *)(v9 + v19 + 1080) = 0;
            v21 = (unsigned __int64)&v15[-v13] >> 9;
          }
          if ( v21 + 63 < v20 )
            JUMPOUT(0x303D2ABC2LL);
          v22 = v21 + 1;
          v23 = 1;
          while ( v22 <= v20 )
            *(_BYTE *)(v9 + v22++ + 1080) = v23++;
          v24 = 6;
LABEL_30:
          while ( v22 <= v20 )
          {
            for ( j = 0; ; ++j )
            {
              if ( 1 << v24 <= j )
              {
                ++v24;
                goto LABEL_30;
              }
              *(_BYTE *)(v9 + v22++ + 1080) = v24 + 58;
              if ( v22 > v20 )
                break;
            }
            ++v24;
          }
        }
        result = *(unsigned int *)v15 | 2LL;
        *(_DWORD *)v15 = result;
        if ( v42 < 16 && v37 == 0 )
        {
          result = (unsigned __int64)v15 & 0xFFFFFFFFFFF80000LL;
          v35 = (unsigned __int64)&v15[-((unsigned __int64)v15 & 0xFFFFFFFFFFF80000LL) - 2112] >> 9;
          if ( *(_BYTE *)(result + v35 + 56) != 0 )
            *(_BYTE *)(result + v35 + 56) = 0;
        }
      }
      if ( ++v16 == v43 )
      {
        v14 = v36;
        break;
      }
      v14 = v36;
      v15 = v36;
      v12 = v39;
    }
    else
    {
      v15 += result;
      v12 = v39;
    }
  }
  *(_QWORD *)(v9 + 32) = &v14[-v9];
  *(_BYTE *)(v9 + 48) = 0;
  return result;
}
