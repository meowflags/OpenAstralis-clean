// sub_501EB00
// rva 0x0501eb00  size 1402  section .text  group text
// window base 0x18501eb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501EB00(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 i; // rax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 j; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // rbx
  __int64 result; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // r9d
  __int64 v33; // rsi
  __int64 v34; // rdi
  int v35; // esi
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rdx
  int v47; // eax
  int v48; // edx
  int v49; // ecx
  int v50; // edi
  int v51; // esi
  int v52; // r8d
  int v53; // r9d
  char v54; // [rsp+0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+10h] [rbp-48h]
  __int64 v57; // [rsp+18h] [rbp-40h]
  __int64 v58; // [rsp+20h] [rbp-38h]
  unsigned int v59; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v60; // [rsp+30h] [rbp-28h]
  unsigned int v61; // [rsp+34h] [rbp-24h]
  unsigned int v62; // [rsp+38h] [rbp-20h]
  int v63; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v64; // [rsp+40h] [rbp-18h]
  unsigned int v65; // [rsp+44h] [rbp-14h]
  __int64 v66; // [rsp+48h] [rbp-10h]
  unsigned int v67; // [rsp+50h] [rbp-8h]
  unsigned int v68; // [rsp+54h] [rbp-4h]

  v58 = a3;
  v68 = a6;
  if ( (unsigned __int64)&v54 <= *(_QWORD *)(v10 + 8) )
  {
    v67 = a5;
    sub_1EB84E0();
  }
  else if ( a6 >= 0 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    v12 = *(_QWORD *)(v10 + 32);
    v13 = 34082368;
    v66 = 34082368;
    v8 = ((unsigned int)a6 + 19LL) & 0x1FFFFFFF8LL;
    if ( v8 >= 0x20000 || (a2 = v11 + v8, v11 + v8 > v12) )
    {
      v67 = a5;
      v57 = sub_1EAA840(a1, a2, a3: 34082368, a4: 34082368, a5: v68);
      v13 = v66;
      a6 = v68;
      a5 = v67;
      a3 = v58;
    }
    else
    {
      *(_QWORD *)(v10 + 40) = a2;
      *(_QWORD *)v11 = 34082368;
      *(_DWORD *)(v11 + 8) = a6;
      *(_DWORD *)(v11 + 12) = 0;
      if ( v8 - 16 >= 0x800 )
      {
        v67 = a5;
        memset((void *)(v11 + 16), 0, v8 - 16);
        a1 = v11 + v8;
        v13 = v66;
      }
      else
      {
        for ( i = 16; v8 > i; i += 8LL )
          *(_QWORD *)(v11 + i) = 0;
      }
      v57 = v11;
    }
    v15 = a6 + a5;
    if ( a6 >= 1 )
    {
      if ( a3 != v9 )
      {
        LODWORD(v8) = *(_DWORD *)(a3 + 8);
        v64 = v8;
        if ( (unsigned int)v8 > (unsigned int)a5 )
        {
          LODWORD(a2) = *(_DWORD *)(a3 + 4LL * (unsigned int)a5 + 12);
          if ( (unsigned int)a2 < 0x100 )
          {
            v65 = a6 + a5;
            v13 = v57;
            *(_BYTE *)(v57 + 12) = a2;
            a2 = (unsigned int)(a5 + 1);
            v30 = 1;
            a3 = v58;
            while ( 1 )
            {
              if ( a6 <= (int)v30 )
              {
                a5 = (unsigned int)a2;
                goto LABEL_24;
              }
              if ( (unsigned int)v8 <= (unsigned int)a2 )
                goto LABEL_76;
              a1 = *(unsigned int *)(a3 + 4 * a2 + 12);
              if ( (unsigned int)a1 >= 0x100 )
                break;
              if ( a6 <= (unsigned int)v30 )
                goto LABEL_77;
              *(_BYTE *)(v13 + v30 + 12) = a1;
              a2 = (unsigned int)(a2 + 1);
              v30 = (unsigned int)(v30 + 1);
            }
            v63 = *(_DWORD *)(a3 + 4 * a2 + 12);
            v62 = v30;
            LODWORD(a5) = a2;
            v15 = v65;
          }
          else
          {
            v63 = *(_DWORD *)(a3 + 4LL * (unsigned int)a5 + 12);
            v62 = 0;
          }
          v65 = v15;
          v61 = a5;
          v60 = v62 + sub_501F080(a1, a2, a3, a4: v13, a5, a6: v15, a7: v54);
          v21 = sub_50217A0(a1: v17, a2: v18, a3: v60, a4: v16, a5: v19, a6: v20, a7: v54);
          if ( (v21 & 0x80000000) == 0 )
          {
            v25 = *(_QWORD *)(v10 + 40);
            j = *(_QWORD *)(v10 + 32);
            v27 = (v21 + 19LL) & 0x1FFFFFFF8LL;
            if ( v27 >= 0x20000 || (v22 = v25 + v27, v25 + v27 > j) )
            {
              v59 = v21;
              v25 = sub_1EAA840(a1: v23, a2: v24, a3: v66, a4: v22, a5: v21);
              v21 = v59;
              LODWORD(v8) = v64;
              v31 = v57;
              v32 = v68;
            }
            else
            {
              v28 = v66;
              *(_QWORD *)(v10 + 40) = v22;
              *(_QWORD *)v25 = v28;
              *(_DWORD *)(v25 + 8) = v21;
              *(_DWORD *)(v25 + 12) = 0;
              if ( v27 - 16 >= 0x800 )
              {
                v59 = v21;
                memset((void *)(v25 + 16), 0, v27 - 16);
                v23 = v25 + v27;
                v21 = v59;
              }
              else
              {
                for ( j = 16; v27 > j; j += 8LL )
                  *(_QWORD *)(v25 + j) = 0;
              }
              LODWORD(v8) = v64;
              v31 = v57;
              v32 = v68;
            }
            if ( (int)v62 < 1 )
              return sub_18501EDFC(a1: v23, a2: v24, a3: v25, a4: v31, a5: j, a6: v32, a7, a8);
            v33 = v62;
            if ( v62 <= v32 )
            {
              if ( v62 <= v21 >> 1 )
              {
                if ( v31 == v9 )
                  JUMPOUT(0x30A039D7DLL);
                if ( v25 == v9 )
                  JUMPOUT(0x30A039D87LL);
                v56 = v25;
                sub_2836300(a1: v23, a2: v62, a3: v31 + 12, a4: v31, a5: v25 + 12, a6: v62);
                v35 = 2 * v62;
                if ( v60 == v68 )
                {
                  result = v56;
                  *(_WORD *)(v56 + v35 + 12) = v63;
                  v40 = v61 + 1;
                  v41 = v62 + 1;
                  v42 = v40;
                  LODWORD(v8) = v64;
                  v43 = v68;
                  v44 = v58;
                  while ( (int)v43 > (int)v41 )
                  {
                    if ( (unsigned int)v8 <= (unsigned int)v42 )
                      goto LABEL_72;
                    v40 = *(unsigned int *)(v44 + 4 * v42 + 12);
                    v34 = 2 * (int)v41;
                    *(_WORD *)(result + v34 + 12) = v40;
                    v41 = (unsigned int)(v41 + 1);
                    v42 = (unsigned int)(v42 + 1);
                  }
                  if ( *(int *)(v10 + 16) <= 0 )
                    return sub_277F280(a1: v34, a2: v41, a3: v44, a4: v42, a5: v40, a6: v43);
                  return result;
                }
                v66 = v35;
                result = sub_501F640(a1: v56, a2: v62, a3: v58, a4: (int)(2 * v62), a5: v61, a6: v65);
                v39 = v66;
                if ( *(_WORD *)(result + v66 + 12) >= 0x100u )
                {
                  if ( *(int *)(v10 + 16) <= 0 )
                  {
                    v55 = result;
                    sub_277F280();
                    return v55;
                  }
                  return result;
                }
                v45 = v68;
                v46 = v58;
                if ( result != v9 )
                {
                  if ( v68 <= *(_DWORD *)(result + 8) >> 1 )
                  {
                    if ( result == v9 )
                      JUMPOUT(0x30A039EABLL);
                    if ( v57 == v9 )
                      JUMPOUT(0x30A039EB5LL);
                    v55 = result;
                    v47 = sub_2836340(a1: v36, a2: v37, a3: result + 12, a4: v57, a5: v57 + 12);
                    if ( *(int *)(v10 + 16) <= 0 )
                      v47 = sub_277F280();
                    if ( v47 == v68 )
                      return v57;
                    else
                      return v55;
                  }
                  goto LABEL_75;
                }
LABEL_74:
                sub_2771080(a1: v36, a2: v37, a3: v46, a4: v39, a5: v38, a6: v45);
LABEL_75:
                sub_2770B00(a1: v36, a2: v62, a3: v60, a4: v39, a5: v61);
LABEL_76:
                LODWORD(v30) = sub_2771220(a1, a2, a3: (unsigned int)a2, a4: v13, a5: (unsigned int)v8);
LABEL_77:
                sub_2771220(a1, a2, a3: (unsigned int)v30, a4: a3, a5: (unsigned int)a6);
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                __builtin_debugtrap();
                return sub_501F080(a1: v50, a2: v51, a3: v48, a4: v49, a5: v52, a6: v53, a7);
              }
LABEL_73:
              sub_2770B00(a1: v23, a2: v33, a3: v25, a4: v31);
              goto LABEL_74;
            }
LABEL_71:
            sub_2770B00(a1: v23, a2: v33, a3: v25, a4: v31);
LABEL_72:
            sub_2771220(a1: v34, a2: v41, a3: (unsigned int)v42, a4: v42, a5: v64);
            goto LABEL_73;
          }
LABEL_70:
          sub_2770E80(a1: v23, a2: v24, a3: v21);
          goto LABEL_71;
        }
LABEL_69:
        v65 = v15;
        v21 = sub_2771220(a1, a2, a3: (unsigned int)a5, a4: v13, a5: v64);
        goto LABEL_70;
      }
LABEL_68:
      v65 = v15;
      v67 = a5;
      v15 = sub_2771080();
      goto LABEL_69;
    }
    v65 = a6 + a5;
    v13 = v57;
LABEL_24:
    if ( *(int *)(v10 + 16) <= 0 )
    {
      sub_277F280(a1, a2, a3, a4: v13, a5);
      return v57;
    }
    return v13;
  }
  v67 = a5;
  v15 = sub_2770E80(a1, a2, a3: v68);
  goto LABEL_68;
}
