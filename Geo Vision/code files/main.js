/* ==============================
   GEOVISION MAIN JAVASCRIPT
   ============================== */


/* ========= LOADER ========= */

window.addEventListener("load", function () {
    const loader = document.getElementById("loader");

    setTimeout(() => {
        loader.style.opacity = "0";
        loader.style.visibility = "hidden";
        loader.style.transition = "0.5s ease";
    }, 1200);
});


/* ========= MOBILE MENU ========= */

const menuBtn = document.querySelector(".menu-btn");
const navLinks = document.querySelector(".nav-links");

menuBtn.addEventListener("click", () => {
    navLinks.classList.toggle("show");
});


/* ========= SMOOTH SCROLL ========= */

document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener("click", function (e) {
        e.preventDefault();

        document.querySelector(this.getAttribute("href")).scrollIntoView({
            behavior: "smooth"
        });
    });
});


/* ========= COUNTER ANIMATION ========= */

const counters = document.querySelectorAll(".counter");

const speed = 50;

function animateCounters() {
    counters.forEach(counter => {
        const target = +counter.getAttribute("data-target");
        let count = 0;

        const updateCount = () => {
            const increment = target / speed;

            if (count < target) {
                count += increment;
                counter.innerText = Math.ceil(count);
                setTimeout(updateCount, 30);
            } else {
                counter.innerText = target;
            }
        };

        updateCount();
    });
}

/* Trigger counters when visible */
const statsSection = document.querySelector(".stats");

window.addEventListener("scroll", () => {
    const sectionPos = statsSection.getBoundingClientRect().top;
    const screenPos = window.innerHeight / 1.3;

    if (sectionPos < screenPos) {
        animateCounters();
    }
});


/* ========= STICKY NAVBAR EFFECT ========= */

window.addEventListener("scroll", () => {
    const header = document.querySelector("header");

    if (window.scrollY > 50) {
        header.classList.add("sticky");
    } else {
        header.classList.remove("sticky");
    }
});


/* ========= ACTIVE NAV LINK ========= */

const sections = document.querySelectorAll("section");
const navItems = document.querySelectorAll(".nav-links li a");

window.addEventListener("scroll", () => {
    let current = "";

    sections.forEach(section => {
        const sectionTop = section.offsetTop;

        if (pageYOffset >= sectionTop - 200) {
            current = section.getAttribute("id");
        }
    });

    navItems.forEach(link => {
        link.classList.remove("active");
        if (link.getAttribute("href").includes(current)) {
            link.classList.add("active");
        }
    });
});


/* ========= SCROLL REVEAL EFFECT ========= */

const revealElements = document.querySelectorAll(
    ".feature-card, .conflict-card, .stat-box, .org-grid div"
);

function revealOnScroll() {
    const windowHeight = window.innerHeight;

    revealElements.forEach(el => {
        const elementTop = el.getBoundingClientRect().top;

        if (elementTop < windowHeight - 100) {
            el.style.opacity = "1";
            el.style.transform = "translateY(0)";
            el.style.transition = "0.6s ease";
        } else {
            el.style.opacity = "0";
            el.style.transform = "translateY(40px)";
        }
    });
}

window.addEventListener("scroll", revealOnScroll);


/* ========= INITIAL STATE FOR ANIMATION ========= */

revealElements.forEach(el => {
    el.style.opacity = "0";
    el.style.transform = "translateY(40px)";
});


/* ========= NEWS TICKER SPEED CONTROL ========= */

const ticker = document.querySelector("marquee");

if (ticker) {
    ticker.setAttribute("scrollamount", "8");
}


/* ========= BACK TO TOP BUTTON ========= */

const backToTop = document.createElement("button");

backToTop.innerHTML = "↑";
backToTop.id = "backToTop";

document.body.appendChild(backToTop);

backToTop.style.cssText = `
    position: fixed;
    bottom: 20px;
    right: 20px;
    padding: 10px 15px;
    font-size: 18px;
    background: #00d4ff;
    border: none;
    border-radius: 50%;
    cursor: pointer;
    display: none;
    z-index: 999;
`;

window.addEventListener("scroll", () => {
    if (window.scrollY > 300) {
        backToTop.style.display = "block";
    } else {
        backToTop.style.display = "none";
    }
});

backToTop.addEventListener("click", () => {
    window.scrollTo({
        top: 0,
        behavior: "smooth"
    });
});


/* ========= NEWSLETTER VALIDATION ========= */

const form = document.querySelector(".newsletter form");

if (form) {
    form.addEventListener("submit", function (e) {
        e.preventDefault();

        const email = this.querySelector("input").value;

        if (email.includes("@")) {
            alert("Subscribed successfully to GeoVision!");
            this.reset();
        } else {
            alert("Please enter a valid email!");
        }
    });
}